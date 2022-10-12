// Fill out your copyright notice in the Description page of Project Settings.


#include "VVEngineActor.h"

// Sets default values
AVVEngineActor::AVVEngineActor()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	

}

// Called when the game starts or when spawned
void AVVEngineActor::BeginPlay()
{
	Super::BeginPlay();
	
	FVVEngineChunkManager TestCManager = FVVEngineChunkManager();
	
	FVector p;
	FIntVector i;
	FIntVector j;
	FIntVector k;

	for (int x = -2200; x < 2000; x+=100)
	{
		p = FVector(x, 0., 0.);

		i = WorldToVoxelVector(p);
		j = VoxelToChunkVector(i);
		k = VoxelToInChunk(i);
		UE_LOG(LogTemp, Warning, TEXT("World : (%f,%f,%f)"), p.X, p.Y, p.Z);
		UE_LOG(LogTemp, Warning, TEXT("Voxel : (%d,%d,%d)"), i.X, i.Y, i.Z);
		UE_LOG(LogTemp, Warning, TEXT("Chunk : (%d,%d,%d)"), j.X, j.Y, j.Z);
		UE_LOG(LogTemp, Warning, TEXT("InChunk: (%d,%d,%d)"), k.X, k.Y, k.Z);
	}

	
	
	UE_LOG(LogTemp, Warning, TEXT("index : %d %d %d "), i.X, i.Y, i.Z);




	

	
	
}

// Called every frame
void AVVEngineActor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

