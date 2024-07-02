// Copyright Epic Games, Inc. All Rights Reserved.

#include "SperasoftRoadmapGameMode.h"
#include "SperasoftRoadmapCharacter.h"
#include "UI/GameHUD.h"
#include "UObject/ConstructorHelpers.h"

ASperasoftRoadmapGameMode::ASperasoftRoadmapGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPerson/Blueprints/BP_FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

	HUDClass = AGameHUD::StaticClass();
}
