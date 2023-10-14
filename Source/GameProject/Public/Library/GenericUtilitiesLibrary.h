// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "GenericUtilitiesLibrary.generated.h"

/**
 * 
 */
UCLASS()
class GAMEPROJECT_API UGenericUtilitiesLibrary : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()

public:
	UFUNCTION(BlueprintCallable, BlueprintPure, Category = "GenericUtilitiesLibrary | Files")
		static TArray<FString> GetOSDrives();
	
};
