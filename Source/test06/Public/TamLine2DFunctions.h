// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "TamLine2DFunctions.generated.h"

/**
 *
 */
UCLASS()
class TEST06_API UTamLine2DFunctions : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()
	UFUNCTION(BlueprintCallable, Category = "Tam")
		static FString TamTestFunction(FString Link, float a);
};
