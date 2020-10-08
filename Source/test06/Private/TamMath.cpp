// Fill out your copyright notice in the Description page of Project Settings.


#include "TamMath.h"

// Sets default values
ATamMath::ATamMath() {
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ATamMath::BeginPlay() {
	Super::BeginPlay();

}

// Called every frame
void ATamMath::Tick(float DeltaTime) {
	Super::Tick(DeltaTime);

}

bool ATamMath::isPointInside2Points(FVector2D point1, FVector2D point2, FVector2D destPoint) {
	float dx = abs(point1.X - point2.X);
	float dy = abs(point1.Y - point2.Y);
	if (dx > dy) {
		if (destPoint.X > std::max(point1.X, point2.X)) return false;
		if (destPoint.X < std::min(point1.X, point2.X)) return false;
	} else {
		if (destPoint.Y > std::max(point1.Y, point2.Y)) return false;
		if (destPoint.Y < std::min(point1.Y, point2.Y)) return false;
	}
	return true;
}

FTamLine2D ATamMath::line2DAddVector(FTamLine2D line, FVector2D distance) {
	FTamLine2D result;
	result = line;
	result.startPoint.X += distance.X;
	result.startPoint.Y += distance.Y;
	result.endPoint.X += distance.X;
	result.endPoint.Y += distance.Y;
	return result;
}

UPARAM(DisplayName = "New Line")FTamLine ATamMath::moveLine(FTamLine line, FVector distance) {
	FTamLine result;
	result.startPoint = line.startPoint + distance;
	result.endPoint = line.endPoint + distance;
	return result;
}

