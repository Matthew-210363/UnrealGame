// Fill out your copyright notice in the Description page of Project Settings.


#include "Items/Item.h"

// Sets default values
AItem::AItem()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	
}

// Called when the game starts or when spawned
void AItem::BeginPlay()
{
	Super::BeginPlay();

	UE_LOG(LogTemp, Warning, TEXT("Hello from the real side, not unreal"));
	GEngine->AddOnScreenDebugMessage(0, 30, FColor::Yellow, TEXT("OnScreen Message, babyyyy"));
}

// Called every frame
void AItem::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	
	RunningTime += DeltaTime;
	//float zOffset = Amplitude * FMath::Sin(TimeConstant * RunningTime);
	
	//AddActorWorldOffset(FVector(0,0,zOffset));
	//DrawDebugSphere(GetWorld(), GetActorLocation(), 50, 24, FColor::Cyan);
}

float AItem::TransformedSine()
{
	float zOffset = Amplitude * FMath::Sin(TimeConstant * RunningTime);
	return zOffset;
}

float AItem::TransformedCos()
{
	float zOffset = Amplitude * FMath::Cos(TimeConstant * RunningTime);
	return zOffset;
}