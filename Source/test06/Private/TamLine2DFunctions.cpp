// Fill out your copyright notice in the Description page of Project Settings.


#include "TamLine2DFunctions.h"

FString UTamLine2DFunctions::TamTestFunction(FString Link, float a)
{
	//return FString();
	return (FString::Printf(TEXT("hello %d"), a));
}
