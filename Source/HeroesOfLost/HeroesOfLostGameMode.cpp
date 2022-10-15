// Copyright Epic Games, Inc. All Rights Reserved.

#include "HeroesOfLostGameMode.h"
#include "HeroesOfLostCharacter.h"
#include "UObject/ConstructorHelpers.h"

AHeroesOfLostGameMode::AHeroesOfLostGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
