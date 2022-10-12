// Fill out your copyright notice in the Description page of Project Settings.

#include "DualContour.h"
#include "qef_simd.h"

namespace DualContour
{


	static const FIntVector4 AXIS_OFFSET[3] = {
		TVoxelIndex4(1, 0, 0, 0),
		TVoxelIndex4(0, 1, 0, 0),
		TVoxelIndex4(0, 0, 1, 0)
	};

	static const FIntVector4 EDGE_NODE_OFFSETS[3][4] = {
		{ TVoxelIndex4(0), TVoxelIndex4(0, 0, 1, 0), TVoxelIndex4(0, 1, 0, 0), TVoxelIndex4(0, 1, 1, 0) },
		{ TVoxelIndex4(0), TVoxelIndex4(1, 0, 0, 0), TVoxelIndex4(0, 0, 1, 0), TVoxelIndex4(1, 0, 1, 0) },
		{ TVoxelIndex4(0), TVoxelIndex4(0, 1, 0, 0), TVoxelIndex4(1, 0, 0, 0), TVoxelIndex4(1, 1, 0, 0) },
	};

	const uint32 ENCODED_EDGE_OFFSETS[12] = {
		0x00000000,
		0x00100000,
		0x00000400,
		0x00100400,
		0x40000000,
		0x40100000,
		0x40000001,
		0x40100001,
		0x80000000,
		0x80000400,
		0x80000001,
		0x80000401,
	};

	const uint32_t ENCODED_EDGE_NODE_OFFSETS[12] = {
		0x00000000,
		0x00100000,
		0x00000400,
		0x00100400,
		0x00000000,
		0x00000001,
		0x00100000,
		0x00100001,
		0x00000000,
		0x00000400,
		0x00000001,
		0x00000401,
	};


	float Density(FVVEngineChunk* VoxelData, const FIntVector4& Index) {
		return VoxelData->data.GetDensity(FIntVector(Index.X, Index.Y, Index.Z));
	}

	// returns x * (1.0 - a) + y * a 
	// the linear blend of x and y using the floating-point value a

	FVector4 mix(const FVector4& x, const FVector4& y, float a) {
		return x * (1.f - a) + y * a;
	}

	FVector VertexInterpolation(FVector p1, FVector p2, float valp1, float valp2) {
		static const float isolevel = 0.5f;

		if (std::abs(isolevel - valp1) < 0.00001) {
			return p1;
		}

		if (std::abs(isolevel - valp2) < 0.00001) {
			return p2;
		}

		if (std::abs(valp1 - valp2) < 0.00001) {
			return p1;
		}

		if (valp1 == valp2) {
			return p1;
		}

		float mu = (isolevel - valp1) / (valp2 - valp1);
		return p1 + (p2 - p1) * mu;
	}

	uint32 EncodeAxisUniqueID(const int axis, const int x, const int y, const int z) {
		return (x << 0) | (y << 10) | (z << 20) | (axis << 30);
	}
	uint32 EncodeVoxelUniqueID(const FIntVector4& idxPos) {
		return idxPos.X | (idxPos.Y << 10) | (idxPos.Z << 20);
	}
	FIntVector4 DecodeVoxelUniqueID(const uint32_t id) {
		return TVoxelIndex4(id & 0x3ff, (id >> 10) & 0x3ff, (id >> 20) & 0x3ff, 0);
	}

	void FindActiveVoxels(FVVEngineChunk* voxelData, VoxelIDSet& activeVoxels, EdgeInfoMap& activeEdges) {
		for (int x = 1; x < voxelData->Num() - 1; x++) {
			for (int y = 1; y < voxelData->Num() - 1; y++) {
				for (int z = 1; z < voxelData->Num() - 1; z++) {
					const TVoxelIndex4 p(x, y, z, 0);

					for (int axis = 0; axis < 3; axis++) {
						const TVoxelIndex4 q = p + AXIS_OFFSET[axis];

						const float pDensity = Density(voxelData, p);
						const float qDensity = Density(voxelData, q);

						const bool zeroCrossing = (pDensity >= 0.5f && qDensity < 0.5f) || (pDensity < 0.5f && qDensity >= 0.5f);

						if (!zeroCrossing) continue;

						//UE_LOG(LogTemp, Warning, TEXT("x, y, z - pDensity, qDensity  --> %d %d %d - %f %f"), x, y, z, pDensity, qDensity);

						const FVector p1 = voxelData->VoxelIndexToVector(FVector(p.X, p.Y, p.Z));
						const FVector q1 = voxelData->VoxelIndexToVector(FVector(q.X, q.Y, q.Z));
						const FVector4 pos = VertexInterpolation(p1, q1, pDensity, qDensity);

						FVector4 tmp(
							Density(voxelData, p + TVoxelIndex4(1, 0, 0, 0)) - Density(voxelData, p - TVoxelIndex4(1, 0, 0, 0)),
							Density(voxelData, p + TVoxelIndex4(0, 1, 0, 0)) - Density(voxelData, p - TVoxelIndex4(0, 1, 0, 0)),
							Density(voxelData, p + TVoxelIndex4(0, 0, 1, 0)) - Density(voxelData, p - TVoxelIndex4(0, 0, 1, 0)),
							0.f);

						auto normal = -tmp.GetSafeNormal(0.000001f);

						EdgeInfo info;
						info.pos = pos;
						info.normal = normal;
						info.winding = pDensity >= 0.5f;

						const auto code = EncodeAxisUniqueID(axis, x, y, z);

						//UE_LOG(LogTemp, Warning, TEXT("code  --> %d"), code);

						activeEdges[code] = info;

						const auto edgeNodes = EDGE_NODE_OFFSETS[axis];
						for (int i = 0; i < 4; i++) {
							const auto nodeIdxPos = p - edgeNodes[i];
							const auto nodeID = EncodeVoxelUniqueID(nodeIdxPos);
							activeVoxels.insert(nodeID);
						}
					}
				}
			}
		}
	}

	static void GenerateVertexData(const VoxelIDSet& voxels, const EdgeInfoMap& edges, VoxelIndexMap& vertexIndices, TArray<FVector>& varray, TArray<FVector>& narray) {
		int idxCounter = 0;
		for (const auto& voxelID : voxels) {
			FVector4f p[12];
			FVector4f n[12];

			int idx = 0;
			for (int i = 0; i < 12; i++) {
				const auto edgeID = voxelID + ENCODED_EDGE_OFFSETS[i];
				const auto iter = edges.find(edgeID);

				if (iter != end(edges)) {
					const auto& info = iter->second;
					const FVector4 pos = info.pos;
					const FVector4 normal = info.normal;

					p[idx] = (FVector4f)pos;
					n[idx] = (FVector4f)normal;
					idx++;
				}
			}

			FVector4f nodePos;

			qef_solve_from_points_4d(&p[0].X, &n[0].X, idx, &nodePos.X);

			FVector4f nodeNormal;
			for (int i = 0; i < idx; i++) {
				nodeNormal += n[i];
			}

			nodeNormal *= (1.f / (float)idx);

			vertexIndices[voxelID] = idxCounter++;
			varray.Add(FVector(nodePos.X, nodePos.Y, nodePos.Z));
			narray.Add(FVector(nodeNormal.X, nodeNormal.Y, nodeNormal.Z));
		}

	}

	static void GenerateTriangles(const EdgeInfoMap& edges, const VoxelIndexMap& vertexIndices, TArray<int32>& triarray) {
		for (const auto& pair : edges) {
			const auto& edge = pair.first;
			const auto& info = pair.second;

			const TVoxelIndex4 basePos = DecodeVoxelUniqueID(edge);
			const int axis = (edge >> 30) & 0xff;

			const int nodeID = edge & ~0xc0000000;
			const uint32_t voxelIDs[4] = {
				nodeID - ENCODED_EDGE_NODE_OFFSETS[axis * 4 + 0],
				nodeID - ENCODED_EDGE_NODE_OFFSETS[axis * 4 + 1],
				nodeID - ENCODED_EDGE_NODE_OFFSETS[axis * 4 + 2],
				nodeID - ENCODED_EDGE_NODE_OFFSETS[axis * 4 + 3],
			};

			// attempt to find the 4 voxels which share this edge
			int edgeVoxels[4];
			int numFoundVoxels = 0;
			for (int i = 0; i < 4; i++) {
				const auto iter = vertexIndices.find(voxelIDs[i]);
				if (iter != end(vertexIndices)) {
					edgeVoxels[numFoundVoxels++] = iter->second;
				}
			}

			// we can only generate a quad (or two triangles) if all 4 are found
			if (numFoundVoxels < 4) {
				continue;
			}

			if (info.winding) {
				triarray.Add(edgeVoxels[0]);
				triarray.Add(edgeVoxels[1]);
				triarray.Add(edgeVoxels[3]);

				triarray.Add(edgeVoxels[0]);
				triarray.Add(edgeVoxels[3]);
				triarray.Add(edgeVoxels[2]);
			}
			else {
				triarray.Add(edgeVoxels[0]);
				triarray.Add(edgeVoxels[3]);
				triarray.Add(edgeVoxels[1]);

				triarray.Add(edgeVoxels[0]);
				triarray.Add(edgeVoxels[2]);
				triarray.Add(edgeVoxels[3]);
			}
		}
	}
};
//////////////////////////////////////////////////////
//
//
//
/////////////////////////////////////////////////////

