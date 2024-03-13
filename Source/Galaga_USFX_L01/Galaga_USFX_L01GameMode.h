// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "Galaga_USFX_L01GameMode.generated.h"

//class ANaveEnemiga;
class ANaveEnemigaTransporte;
class ANaveEnemigaCaza;
class ANaveEnemigaPesada;
class ANaveEnemigaDestructor;
class ANaveEnemigaEspia;
class ANaveEnemigaRecolector;
class ANaveEnemigaReabastecimiento;
class ANaveEnemigaNodriza;

UCLASS(MinimalAPI)
class AGalaga_USFX_L01GameMode : public AGameModeBase
{
	GENERATED_BODY()

public:
	AGalaga_USFX_L01GameMode();

public:

	//ANaveEnemiga* NaveEnemiga01;
	ANaveEnemigaTransporte* NaveEnemigaTransporte01;
	ANaveEnemigaTransporte* NaveEnemigaTransporte02;
	ANaveEnemigaCaza* NaveEnemigaCaza01;
	ANaveEnemigaCaza* NaveEnemigaCaza02;
	ANaveEnemigaPesada* NaveEnemigaPesada01;
	ANaveEnemigaPesada* NaveEnemigaPesada02;
	ANaveEnemigaDestructor* NaveEnemigaDestructor01;
	ANaveEnemigaDestructor* NaveEnemigaDestructor02;
	ANaveEnemigaEspia* NaveEnemigaEspia01;
	ANaveEnemigaEspia* NaveEnemigaEspia02;
	ANaveEnemigaRecolector* NaveEnemigaRecolector01;
	ANaveEnemigaRecolector* NaveEnemigaRecolector02;
	ANaveEnemigaReabastecimiento* NaveEnemigaReabas01;
	ANaveEnemigaReabastecimiento* NaveEnemigaReabas02;
	ANaveEnemigaNodriza* NaveEnemigaNodrizaUnica;
	

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
};



