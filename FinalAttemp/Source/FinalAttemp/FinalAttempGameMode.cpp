// Copyright Epic Games, Inc. All Rights Reserved.

#include "FinalAttempGameMode.h"
#include "FinalAttempCharacter.h"
#include "UObject/ConstructorHelpers.h"

AFinalAttempGameMode::AFinalAttempGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
