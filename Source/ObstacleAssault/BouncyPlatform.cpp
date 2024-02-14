// Fill out your copyright notice in the Description page of Project Settings.


#include "BouncyPlatform.h"

// Sets default values
ABouncyPlatform::ABouncyPlatform()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
}

// Called when the game starts or when spawned
void ABouncyPlatform::BeginPlay()
{
	Super::BeginPlay();
}

// Called every frame
void ABouncyPlatform::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

