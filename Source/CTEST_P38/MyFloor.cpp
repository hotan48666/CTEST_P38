// Fill out your copyright notice in the Description page of Project Settings.


#include "MyFloor.h"

// Sets default values
AMyFloor::AMyFloor()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AMyFloor::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AMyFloor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

