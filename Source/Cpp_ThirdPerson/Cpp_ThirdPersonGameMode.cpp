// Copyright Epic Games, Inc. All Rights Reserved.

#include "Cpp_ThirdPersonGameMode.h"
#include "Cpp_ThirdPersonCharacter.h"
#include "UObject/ConstructorHelpers.h"

ACpp_ThirdPersonGameMode::ACpp_ThirdPersonGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPersonCPP/Blueprints/ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
