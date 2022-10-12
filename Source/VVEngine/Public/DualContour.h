// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "VVEngineChunk.h"
#include "CoreMinimal.h"

/**
 * 
 */
 // Fill out your copyright notice in the Description page of Project Settings.

#include "qef_simd.h"

namespace DualContour
{
	struct EdgeInfo {
		FVector4 pos;
		FVector4 normal;
		bool winding = false;
	};


	struct TVoxelIndex {
		int32 X = 0;
		int32 Y = 0;
		int32 Z = 0;

		TVoxelIndex(int32 XIndex, int32 YIndex, int32 ZIndex) : X(XIndex), Y(YIndex), Z(ZIndex) { }

		bool operator==(const TVoxelIndex& other) const {
			return (X == other.X && Y == other.Y && Z == other.Z);
		}

		friend TVoxelIndex operator+(const TVoxelIndex& lhs, const TVoxelIndex& rhs) {
			return TVoxelIndex(lhs.X + rhs.X, lhs.Y + rhs.Y, lhs.Z + rhs.Z);
		}
	};

	namespace std {

		template <>
		struct hash<TVoxelIndex> {
			std::size_t operator()(const TVoxelIndex& k) const {
				using std::hash;
				return ((hash<int>()(k.X) ^ (hash<int>()(k.Y) << 1)) >> 1) ^ (hash<int>()(k.Z) << 1);
			}
		};
	}

	struct TVoxelIndex4 {
		int32 X = 0;
		int32 Y = 0;
		int32 Z = 0;
		int32 W = 0;

		TVoxelIndex4(int32 A) : X(A), Y(A), Z(A), W(A) { }

		TVoxelIndex4(int32 XIndex, int32 YIndex, int32 ZIndex, int32 WIndex) : X(XIndex), Y(YIndex), Z(ZIndex), W(WIndex) { }

		bool operator==(const TVoxelIndex4& other) const {
			return (X == other.X && Y == other.Y && Z == other.Z && W == other.W);
		}

		friend TVoxelIndex4 operator+(const TVoxelIndex4& lhs, const TVoxelIndex4& rhs) {
			return TVoxelIndex4(lhs.X + rhs.X, lhs.Y + rhs.Y, lhs.Z + rhs.Z, lhs.W + rhs.W);
		}

		friend TVoxelIndex4 operator-(const TVoxelIndex4& lhs, const TVoxelIndex4& rhs) {
			return TVoxelIndex4(lhs.X - rhs.X, lhs.Y - rhs.Y, lhs.Z - rhs.Z, lhs.W - rhs.W);
		}
	};





	using EdgeInfoMap = TMap<uint32_t, EdgeInfo>;
	using VoxelIDSet = TSet<uint32_t>;
	using VoxelIndexMap = TMap<uint32_t, int>;

	static const FIntVector4 AXIS_OFFSET[3]; 

	static const FIntVector4 EDGE_NODE_OFFSETS[3][4];

	const uint32 ENCODED_EDGE_OFFSETS[12];

	const uint32_t ENCODED_EDGE_NODE_OFFSETS[12];


	float Density(FVVEngineChunk VoxelData, FIntVector4& Index);
	FVector4 mix(const FVector4& x, const FVector4& y, float a);

	FVector VertexInterpolation(FVector p1, FVector p2, float valp1, float valp2);

	uint32 EncodeAxisUniqueID(const int axis, const int x, const int y, const int z);

	uint32 EncodeVoxelUniqueID(const FIntVector4& idxPos);



	void FindActiveVoxels(FVVEngineChunk* voxelData, VoxelIDSet& activeVoxels, EdgeInfoMap& activeEdges);


	static void GenerateVertexData(const VoxelIDSet& voxels, const EdgeInfoMap& edges, VoxelIndexMap& vertexIndices, TArray<FVector>& varray, TArray<FVector>& narray);

	static void GenerateTriangles(const EdgeInfoMap& edges, const VoxelIndexMap& vertexIndices, TArray<int32>& triarray);

}