// Fill out your copyright notice in the Description page of Project Settings.


#include "TamClassTest1.h"

// Sets default values
ATamClassTest1::ATamClassTest1()
{
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ATamClassTest1::BeginPlay()
{
	Super::BeginPlay();

}

// Called every frame
void ATamClassTest1::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

float ATamClassTest1::TamClassTestFunction(float a, float b) {
	return a + b;
}

