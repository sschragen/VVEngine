// Fill out your copyright notice in the Description page of Project Settings.


#include "VVEngineDefinitions.h"

int FVVEngineDefinitions::VoxelSize = 100;
int FVVEngineDefinitions::ChunkSize = 10;
int FVVEngineDefinitions::ViewDistance = 4;

FIntVector WorldToVoxelVector(FVector v)
{
	return FIntVector(v.X / FVVEngineDefinitions::VoxelSize,
		v.Y / FVVEngineDefinitions::VoxelSize,
		v.Z / FVVEngineDefinitions::VoxelSize);
};
FVector		VoxelToWorldVector(FIntVector v)
{
	return FVector(v.X * FVVEngineDefinitions::VoxelSize,
		v.Y * FVVEngineDefinitions::VoxelSize,
		v.Z * FVVEngineDefinitions::VoxelSize);
};

FIntVector VoxelToChunkVector(FIntVector v)
{
	return FIntVector(v.X / FVVEngineDefinitions::ChunkSize,
		v.Y / FVVEngineDefinitions::ChunkSize,
		v.Z / FVVEngineDefinitions::ChunkSize);
};

FIntVector VoxelToInChunk(FIntVector v)
{
	FIntVector u =  VoxelToChunkVector(v);
	u *= FVVEngineDefinitions::ChunkSize;
	return v - u;
};
