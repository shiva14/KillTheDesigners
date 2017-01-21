// Copyright 1998-2016 Epic Games, Inc. All Rights Reserved.
#pragma once 
#include "GameFramework/HUD.h"
#include "KillTheDesignersHUD.generated.h"

UCLASS()
class AKillTheDesignersHUD : public AHUD
{
	GENERATED_BODY()

public:
	AKillTheDesignersHUD();

	/** Primary draw call for the HUD */
	virtual void DrawHUD() override;

private:
	/** Crosshair asset pointer */
	class UTexture2D* CrosshairTex;

};

