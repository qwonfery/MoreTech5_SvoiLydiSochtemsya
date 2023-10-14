// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "FileUtilitesComponent.generated.h"


UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class GAMEPROJECT_API UFileUtilitesComponent : public UActorComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	UFileUtilitesComponent();

	UFUNCTION(BlueprintCallable, Category = "File Utilites", meta = (DisplayName = "CopyFile"))
		bool CopyFile(const FString& FilePath, const FString& DestinationPath);

	UFUNCTION(BlueprintCallable, Category = "File Utilites", meta = (DisplayName = "MoveFile"))
		bool MoveFile(const FString& FilePath, const FString& DestinationPath);

protected:
	// Called when the game starts
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

		
};
