// Copyright Epic Games, Inc. All Rights Reserved.


#include "SJDev1GameModeBase.h"

ASJDev1GameModeBase::ASJDev1GameModeBase()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/SJCharacter/MyCSJPlayer"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
