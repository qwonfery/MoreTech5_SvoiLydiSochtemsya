// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "PortalUtilityLibrary.generated.h"

/**
 * 
 */
UCLASS()
class GAMEPROJECT_API UPortalUtilityLibrary : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()
	UFUNCTION(BlueprintCallable, Category = "Portal Utility", meta = (WorldContext = "WorldContextObject") )
	static FMatrix GetCameraProjectionMatrix(APlayerController* PlayerController);
};
