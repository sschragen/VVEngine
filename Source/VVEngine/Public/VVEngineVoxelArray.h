// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Math/Vector.h"

#include "VVEngineDefinitions.h"
#include "VVEngineVoxel.h"

#include "VVEngineVoxelArray.generated.h"

/**
 * 
 */
USTRUCT(BlueprintType, Category = "VVEngineVoxelArray")
struct VVENGINE_API FVVEngineVoxelArray
{
	GENERATED_BODY()
private:
	
		TArray <FVVEngineVoxel> data;
		int DataLength;
		int ChunkExtend;

public:
	FVVEngineVoxelArray() 
	{
		DataLength =	(FVVEngineDefinitions::ChunkSize +1) 
					 *	(FVVEngineDefinitions::ChunkSize +1) 
					 *	(FVVEngineDefinitions::ChunkSize +1);
		ChunkExtend =   (FVVEngineDefinitions::ChunkSize / 2);

		data.Reserve(DataLength);
		data.SetNumZeroed(DataLength, true);
		
	};
	~FVVEngineVoxelArray() 
	{
		data.Empty();
	};

	void Empty() 
	{
		FVVEngineVoxel e = { 0,0 };
		for (int i = 0; i < DataLength; i++) data[i] = e;
	};

	FVVEngineVoxel& operator [](FIntVector VectorInChunk) {
		//int ChunkExtend = FVVEngineDefinitions::ChunkSize / 2;
		int index =		(VectorInChunk.X) * FVVEngineDefinitions::ChunkSize+1 * FVVEngineDefinitions::ChunkSize+1
					+	(VectorInChunk.Y) * FVVEngineDefinitions::ChunkSize+1
					+	(VectorInChunk.Z) ; 
		return data[index];
	}
	const FVVEngineVoxel& operator [](FIntVector VectorInChunk) const {
		
		int index =		(VectorInChunk.X - ChunkExtend)* FVVEngineDefinitions::ChunkSize * FVVEngineDefinitions::ChunkSize 
					+	(VectorInChunk.Y - ChunkExtend)* FVVEngineDefinitions::ChunkSize 
					+	(VectorInChunk.Z - ChunkExtend);
		return data[index];
	}

	FVVEngineVoxel& operator [](int index) {
		return data[index];
	};
	const FVVEngineVoxel& operator [](int index) const {
		return data[index];
	};
	int GetNum()
	{
		return DataLength;
	};
	int GetIndex(FIntVector v)
	{
		


		UE_LOG(LogTemp, Warning, TEXT(" -- v : %d , %d , %d"), v.X,v.Y,v.Z);
		UE_LOG(LogTemp, Warning, TEXT(" -- extend : %d"), ChunkExtend);
		int i = 
				(v.X+ ChunkExtend) * FVVEngineDefinitions::ChunkSize * FVVEngineDefinitions::ChunkSize
			+	(v.Y+ ChunkExtend) * FVVEngineDefinitions::ChunkSize
			+	(v.Z+ ChunkExtend);
		UE_LOG(LogTemp, Warning, TEXT(" -- index : %d"), i);
		return abs(i);
	}

	uint8 GetDensity(FIntVector v)
	{
		return data[GetIndex(v)].Density;
	};
	void SetDensity(FIntVector v, uint8 newDensity)
	{
		data[GetIndex(v)].Density = newDensity;
	};

	int GetMaterial(FIntVector v)
	{
		return data[GetIndex(v)].Material;
	};
	void SetMaterial(FIntVector v, int newMaterial)
	{
		data[GetIndex(v)].Material = newMaterial;
	};


};
