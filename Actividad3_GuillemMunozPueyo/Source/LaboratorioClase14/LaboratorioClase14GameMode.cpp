// Copyright Epic Games, Inc. All Rights Reserved.

#include "LaboratorioClase14GameMode.h"
#include "LaboratorioClase14Character.h"
#include "UObject/ConstructorHelpers.h"

ALaboratorioClase14GameMode::ALaboratorioClase14GameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
