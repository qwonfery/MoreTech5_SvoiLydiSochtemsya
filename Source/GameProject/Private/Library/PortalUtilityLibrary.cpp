// Fill out your copyright notice in the Description page of Project Settings.


#include "Library/PortalUtilityLibrary.h"

#include "Components/SceneCaptureComponent2D.h"

FMatrix UPortalUtilityLibrary::GetCameraProjectionMatrix(APlayerController* PlayerController)
{
	FMatrix projMatrix;
	FSceneViewProjectionData projData;
	PlayerController->GetLocalPlayer()->GetProjectionData(PlayerController->GetLocalPlayer()->ViewportClient->Viewport,eSSP_FULL, projData);
	projMatrix = projData.ProjectionMatrix;
	return projMatrix;
}

