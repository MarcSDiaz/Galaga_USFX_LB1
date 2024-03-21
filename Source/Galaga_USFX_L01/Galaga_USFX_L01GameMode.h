// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "Galaga_USFX_L01GameMode.generated.h"

class ANaveEnemiga;
class ACazaG1;
class ACazaG2;
class ADestructorG1;
class ADestructorG2;
class AEspiaG1;
class AEspiaG2;
class APesadaG1;
class APesadaG2;
class AReabastecimientoG1;
class AReabastecimientoG2;
class ARecolectorG1;
class ARecolectorG2;
class ATransporteG1;
class ATransporteG2;
class ANaveEnemigaNodriza;
//class ANaveEnemiga;
//class ANaveEnemigaTransporte;
//class ANaveEnemigaCaza;
//class ANaveEnemigaPesada;
//class ANaveEnemigaDestructor;
//class ANaveEnemigaEspia;
//class ANaveEnemigaRecolector;
//class ANaveEnemigaReabastecimiento;
//class ANaveEnemigaNodriza;

UCLASS(MinimalAPI)
class AGalaga_USFX_L01GameMode : public AGameModeBase
{
	GENERATED_BODY()

public:
	AGalaga_USFX_L01GameMode();

public:

	TArray<ANaveEnemiga*> TANavesEnemigas;
	/*ACazaG1* Caza01;
	ACazaG2* Caza02;
	ADestructorG1* Des01;
	ADestructorG2* Des02;
	AEspiaG1* Espia01;
	AEspiaG2* Espia02;
	APesadaG1* Pesada01;
	APesadaG2* Pesada02;
	AReabastecimientoG1* Reabas01;
	AReabastecimientoG2* Reabas02;
	ARecolectorG1* Recolector01;
	ARecolectorG2* Recolector02;
	ATransporteG1* Transporte01;
	ATransporteG2* Transporte02;
	ANaveEnemigaNodriza* Nodriza;*/
	/*ANaveEnemiga* NaveEnemiga01;
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
	ANaveEnemigaNodriza* NaveEnemigaNodrizaUnica;*/
	

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
};



