// Copyright 1998-2016 Epic Games, Inc. All Rights Reserved.

#include "KillTheDesigners.h"
#include "KillTheDesignersGameMode.h"
#include "KillTheDesignersHUD.h"
#include "KillTheDesignersCharacter.h"

AKillTheDesignersGameMode::AKillTheDesignersGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPersonCPP/Blueprints/FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

	// use our custom HUD class
	HUDClass = AKillTheDesignersHUD::StaticClass();
}
