// Copyright Epic Games, Inc. All Rights Reserved.

#include "CyberpunkGameMode.h"
#include "CyberpunkCharacter.h"
#include "UObject/ConstructorHelpers.h"

ACyberpunkGameMode::ACyberpunkGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
