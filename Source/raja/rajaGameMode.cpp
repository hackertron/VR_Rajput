// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.

#include "cpp_parkGameMode.h"
#include "cpp_parkCharacter.h"
#include "UObject/ConstructorHelpers.h"

Acpp_parkGameMode::Acpp_rajaGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPersonCPP/Blueprints/ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
