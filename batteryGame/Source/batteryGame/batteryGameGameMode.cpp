// Copyright Epic Games, Inc. All Rights Reserved.

#include "batteryGameGameMode.h"
#include "batteryGameCharacter.h"
#include "UObject/ConstructorHelpers.h"

AbatteryGameGameMode::AbatteryGameGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPersonCPP/Blueprints/ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
