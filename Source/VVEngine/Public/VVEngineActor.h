// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"

#include "VVEngineDefinitions.h"
#include "VVEngineChunkManager.h"
#include "VVEngineMeshComponent.h"

#include "VVEngineActor.generated.h"

UCLASS()
class VVENGINE_API AVVEngineActor : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AVVEngineActor();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
