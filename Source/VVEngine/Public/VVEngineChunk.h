// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "VVEngineVoxelArray.h"

#include "CoreMinimal.h"

#include "VVEngineChunk.generated.h"

/**
 * 
 */
UENUM()
enum FChunkState
{
	EMPTY		UMETA(DisplayName = "Empty"),
	LOAD		UMETA(DisplayName = "Load"),
	SAVE		UMETA(DisplayName = "Save"),
	CREATE		UMETA(DisplayName = "Create"),
	READY		UMETA(DisplayName = "Ready"),
	CHANGED		UMETA(DisplayName = "Changed"),
	DELETE		UMETA(DisplayName = "Delete"),
};


USTRUCT()
struct FChunkDescription
{
	GENERATED_BODY()
public:
	FIntVector ID;
	TEnumAsByte <FChunkState> State;
	FString Name()
	{
		return FString::Printf(TEXT("%d - %d - %d"), ID.X, ID.Y, ID.Z);
	};
};

USTRUCT()
struct VVENGINE_API FVVEngineChunk
{
	GENERATED_BODY()
public:
	FChunkDescription Info;
	FVVEngineVoxelArray data;


	FVVEngineChunk()
	{
		Info.State = FChunkState::EMPTY;
		data = FVVEngineVoxelArray();
	};
	~FVVEngineChunk();
};
