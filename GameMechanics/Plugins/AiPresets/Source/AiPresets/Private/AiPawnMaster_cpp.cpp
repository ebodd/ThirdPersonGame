// Fill out your copyright notice in the Description page of Project Settings.


#include "AiPawnMaster_cpp.h"

// Sets default values
AAiPawnMaster_cpp::AAiPawnMaster_cpp()
{
 	// Set this pawn to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AAiPawnMaster_cpp::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AAiPawnMaster_cpp::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void AAiPawnMaster_cpp::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

