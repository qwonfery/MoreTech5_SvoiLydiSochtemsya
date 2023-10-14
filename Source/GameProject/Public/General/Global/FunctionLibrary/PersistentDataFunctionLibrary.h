// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "PersistentDataFunctionLibrary.generated.h"

/**
 * 
 */
UCLASS()
class GAMEPROJECT_API UPersistentDataFunctionLibrary : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()

public:

	// Path that is used by Graphics Uploader Widget and maybe some others to pick a file to upload
	UFUNCTION(BlueprintCallable, Category = "PersistentDataFunctionLibrary")
		static FString PathToGraphicsUpload_Get() { return PathToGraphicsUpload; };
	UFUNCTION(BlueprintCallable, Category = "PersistentDataFunctionLibrary")
		static void PathToGraphicsUpload_Set(const FString& NewStr) { PathToGraphicsUpload = NewStr; };
	static FString PathToGraphicsUpload;
	// Path that is used by Model Uploader Widget and maybe some others to pick a file to upload
	UFUNCTION(BlueprintCallable, Category = "PersistentDataFunctionLibrary")
		static FString PathToModelUpload_Get() { return PathToModelUpload; };
	UFUNCTION(BlueprintCallable, Category = "PersistentDataFunctionLibrary")
		static void PathToModelUpload_Set(const FString& NewStr) { PathToModelUpload = NewStr; };
	static FString PathToModelUpload;
};
