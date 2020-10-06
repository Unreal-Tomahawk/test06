// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "TamMath.generated.h"


USTRUCT(BlueprintType, Category = "Tam|Math") //2d line with start point and end point
struct FTamLine2D {
	GENERATED_BODY()

	FTamLine2D() {
	}

public:
	UPROPERTY(BlueprintReadWrite, Category = "Tam|Math")
		FVector2D startPoint;
	UPROPERTY(BlueprintReadWrite, Category = "Tam|Math")
		FVector2D endPoint;
};


USTRUCT(BlueprintType, Category = "Tam|Math") //2d rectangle aligh with XY
struct FTamRectangle2D {
	GENERATED_BODY()

	FTamRectangle2D() {
	}

public:
	UPROPERTY(BlueprintReadWrite, Category = "Tam|Math")
		float x;
	UPROPERTY(BlueprintReadWrite, Category = "Tam|Math")
		float y;
	UPROPERTY(BlueprintReadWrite, Category = "Tam|Math")
		float width;
	UPROPERTY(BlueprintReadWrite, Category = "Tam|Math")
		float height;
};


UCLASS()
class TEST06_API ATamMath : public AActor {
	GENERATED_BODY()

public:
	// Sets default values for this actor's properties
	ATamMath();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	UFUNCTION(BlueprintCallable, Category = "Tam|Math") //is destPoint inside a rectangle from point1 to point2
		static bool isPointInside2Points(FVector2D point1, FVector2D point2, FVector2D destPoint);

	UFUNCTION(BlueprintCallable, Category = "Tam|Math") //move line with distance
		static FTamLine2D line2DAddVector(FTamLine2D line, FVector2D distance);



};



