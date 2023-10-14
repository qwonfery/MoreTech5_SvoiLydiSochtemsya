// Fill out your copyright notice in the Description page of Project Settings.


#include "Library/FileUtilitesComponent.h"

// Sets default values for this component's properties
UFileUtilitesComponent::UFileUtilitesComponent()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	// ...
}


// Called when the game starts
void UFileUtilitesComponent::BeginPlay()
{
	Super::BeginPlay();

	// ...
	
}


// Called every frame
void UFileUtilitesComponent::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	// ...
}

bool UFileUtilitesComponent::CopyFile(const FString& FilePath, const FString& DestinationPath)
{
	IPlatformFile& PlatformFile = FPlatformFileManager::Get().GetPlatformFile();

	if (!PlatformFile.FileExists(*FilePath))
		return false;

	FString NewFilePath = DestinationPath + FPaths::GetCleanFilename(FilePath);

	if (PlatformFile.FileExists(*NewFilePath))
		PlatformFile.DeleteFile(*NewFilePath);

	return PlatformFile.CopyFile(*NewFilePath, *FilePath);
}

bool UFileUtilitesComponent::MoveFile(const FString& FilePath, const FString& DestinationPath)
{
	IPlatformFile& PlatformFile = FPlatformFileManager::Get().GetPlatformFile();

	if (!PlatformFile.FileExists(*FilePath))
		return false;

	FString NewFilePath = DestinationPath + FPaths::GetCleanFilename(FilePath);

	if (PlatformFile.FileExists(*NewFilePath))
		PlatformFile.DeleteFile(*NewFilePath);

	return PlatformFile.MoveFile(*NewFilePath, *FilePath);
}

