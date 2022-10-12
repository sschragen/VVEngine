// Fill out your copyright notice in the Description page of Project Settings.


#include "VVEngineChunkManager.h"

FVVEngineChunkManager::FVVEngineChunkManager(FIntVector Origin)
{
	ChunkMap.Empty();
	Info.Origin = Origin;
	Info.ActCenter = Origin;
	for (int x=Info.ActCenter.X-FVVEngineDefinitions::ViewDistance; x==Info.ActCenter.X-FVVEngineDefinitions::ViewDistance;x++)
		for (int y = Info.ActCenter.Y - FVVEngineDefinitions::ViewDistance; y == Info.ActCenter.Y - FVVEngineDefinitions::ViewDistance; y++)
			for (int z = Info.ActCenter.Z - FVVEngineDefinitions::ViewDistance; z == Info.ActCenter.Z - FVVEngineDefinitions::ViewDistance; z++)
			{
				FVVEngineChunk NewChunk = FVVEngineChunk();
				ChunkMap.Add(FIntVector(x,y,z),NewChunk);

			}
}

FVVEngineChunkManager::~FVVEngineChunkManager()
{
	ChunkMap.Empty();
}
