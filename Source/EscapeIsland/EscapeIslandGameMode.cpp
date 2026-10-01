// Copyright Epic Games, Inc. All Rights Reserved.

#include "EscapeIslandGameMode.h"
#include "EscapeIslandCharacter.h"
#include "UObject/ConstructorHelpers.h"

AEscapeIslandGameMode::AEscapeIslandGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
