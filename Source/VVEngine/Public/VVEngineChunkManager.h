// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "VVEngineChunk.h"


#include "CoreMinimal.h"

#include "VVEngineChunkManager.generated.h"
/**
 * 
 */
USTRUCT()
struct VVENGINE_API FChunkManagerInfo
{
	GENERATED_BODY()
public:
	FIntVector Origin;
	FIntVector ActCenter;
};

USTRUCT()
struct VVENGINE_API FVVEngineChunkManager
{
	GENERATED_BODY()
public:
	FChunkManagerInfo Info;

	TMap <FIntVector, FVVEngineChunk> ChunkMap;
	

	FVVEngineChunkManager(FIntVector Origin = { 0,0,0 });
	~FVVEngineChunkManager();


};
