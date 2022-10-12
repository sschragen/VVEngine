// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"


#include "VVEngineDefinitions.generated.h"
/**
 * 
 */


FIntVector	WorldToVoxelVector(FVector v);
FVector		VoxelToWorldVector(FIntVector v);
FIntVector	VoxelToChunkVector(FIntVector v);
FIntVector	VoxelToInChunk(FIntVector v);


USTRUCT()
struct VVENGINE_API FVVEngineDefinitions
{
	GENERATED_BODY()
public:
	static int VoxelSize;
	static int ChunkSize;
	static int ViewDistance;
};
