// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Components/StaticMeshComponent.h"
#include "BouncyPlatform.generated.h"

UCLASS()
class OBSTACLEASSAULT_API ABouncyPlatform : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ABouncyPlatform();

	// Called every frame
	virtual void Tick(float DeltaTime) override;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Bouncy")
	float ImpulseVelocity = 100.f;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

private:
	
};
