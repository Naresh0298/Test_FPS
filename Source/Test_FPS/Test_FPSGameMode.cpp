// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.

#include "Test_FPSGameMode.h"
#include "Test_FPSHUD.h"
#include "Player/FirstpersonCharacter.h"
#include "UObject/ConstructorHelpers.h"

ATest_FPSGameMode::ATest_FPSGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/Dynamic/Player/Behavier/FirstpersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

	// use our custom HUD class
	HUDClass = ATest_FPSHUD::StaticClass();
}
