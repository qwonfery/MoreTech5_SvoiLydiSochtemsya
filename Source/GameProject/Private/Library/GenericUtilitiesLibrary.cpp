// Fill out your copyright notice in the Description page of Project Settings.


#include "Library/GenericUtilitiesLibrary.h"
#include "HAL/PlatformFileManager.h"

TArray<FString> UGenericUtilitiesLibrary::GetOSDrives()
{
	TArray<FString> drives;
	FString letters = TEXT("CDEFGHIJKLMNOPQRSTUVWXYZ");
	FString drive;

	for (int32 i = 0; i < letters.Len(); i++)
	{
		drive = FString(1, (&letters.GetCharArray()[i]));
		drive.Append(TEXT(":/"));

		const FString fullPath = FPaths::GetCleanFilename(drive);
		const FFileStatData data = FPlatformFileManager::Get().GetPlatformFile().GetStatData(*drive);
		if (data.bIsDirectory)
		{
			drives.Add(drive);
		}
	}
	return drives;
}