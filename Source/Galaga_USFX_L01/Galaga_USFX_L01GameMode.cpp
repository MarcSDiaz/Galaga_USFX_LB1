// Copyright Epic Games, Inc. All Rights Reserved.

#include "Galaga_USFX_L01GameMode.h"
#include "Galaga_USFX_L01Pawn.h"
#include "NaveEnemiga.h"
#include "NaveEnemigaTransporte.h"
#include "NaveEnemigaCaza.h"
#include "NaveEnemigaPesada.h"
#include "NaveEnemigaDestructor.h"
#include "NaveEnemigaEspia.h"
#include "NaveEnemigaRecolector.h"
#include "NaveEnemigaReabastecimiento.h"
#include "NaveEnemigaNodriza.h"

AGalaga_USFX_L01GameMode::AGalaga_USFX_L01GameMode()
{
	// set default pawn class to our character class
	DefaultPawnClass = AGalaga_USFX_L01Pawn::StaticClass();

	//NaveEnemiga01 = nullptr;
}

void AGalaga_USFX_L01GameMode::BeginPlay()
{
	Super::BeginPlay();
	//Set the game state to playing

	FVector ubicacionNave01 = FVector(600.0f, 600.0f, 250.0f);//Transporte01
	FVector ubicacionNave02 = FVector(400.0f, -300.0f, 250.0f);//Caza01
	FVector ubicacionNave03 = FVector(400.0f, 300.0f, 250.0f);//Caza02
	FVector ubicacionNave04 = FVector(600.0f, -600.0f, 250.0f);//Transporte02
	FVector ubicacionNave05 = FVector(400.0f, -450.0f, 250.0f);//Pesada01
	FVector ubicacionNave06 = FVector(400.0f, 450.0f, 250.0f);//Pesada02
	FVector ubicacionNave07 = FVector(400.0f, 150.0f, 250.0f);//Destructor01
	FVector ubicacionNave08 = FVector(400.0f, -150.0f, 250.0f);//Destructor02
	FVector ubicacionNave09 = FVector(600.0f, 750.0f, 250.0f);//Espia01
	FVector ubicacionNave10 = FVector(600.0f, -750.0f, 250.0f);//Espia02
	FVector ubicacionNave11 = FVector(600.0f, 900.0f, 250.0f);//Recolector01
	FVector ubicacionNave12 = FVector(600.0f, -900.0f, 250.0f);//Recolector02
	FVector ubicacionNave13 = FVector(800.0f, 300.0f, 250.0f);//Reabas01
	FVector ubicacionNave14 = FVector(800.0f, -300.0f, 250.0f);//Reabas02
	FVector ubicacionNave15 = FVector(700.0f, 0.0f, 250.0f);//Nodriza


	FRotator rotacionNave = FRotator(0.0f, 0.0f, 0.0f);

	UWorld* const World = GetWorld();
	if (World != nullptr)
	{
		// spawn the projectile
		NaveEnemigaTransporte01 = World->SpawnActor<ANaveEnemigaTransporte>(ubicacionNave01, rotacionNave);
		NaveEnemigaTransporte02 = World->SpawnActor<ANaveEnemigaTransporte>(ubicacionNave04, rotacionNave);
		NaveEnemigaCaza01 = World->SpawnActor<ANaveEnemigaCaza>(ubicacionNave02, rotacionNave);
		NaveEnemigaCaza02 = World->SpawnActor<ANaveEnemigaCaza>(ubicacionNave03, rotacionNave);
		NaveEnemigaPesada01 = World->SpawnActor<ANaveEnemigaPesada>(ubicacionNave05, rotacionNave);
		NaveEnemigaPesada02 = World->SpawnActor<ANaveEnemigaPesada>(ubicacionNave06, rotacionNave);
		NaveEnemigaDestructor01 = World->SpawnActor<ANaveEnemigaDestructor>(ubicacionNave07, rotacionNave);
		NaveEnemigaDestructor01 = World->SpawnActor<ANaveEnemigaDestructor>(ubicacionNave08, rotacionNave);
		NaveEnemigaEspia01 = World->SpawnActor<ANaveEnemigaEspia>(ubicacionNave09, rotacionNave);
		NaveEnemigaEspia02 = World->SpawnActor<ANaveEnemigaEspia>(ubicacionNave10, rotacionNave);
		NaveEnemigaRecolector01 = World->SpawnActor<ANaveEnemigaRecolector>(ubicacionNave11, rotacionNave);
		NaveEnemigaRecolector02 = World->SpawnActor<ANaveEnemigaRecolector>(ubicacionNave12, rotacionNave);
		NaveEnemigaReabas01 = World->SpawnActor<ANaveEnemigaReabastecimiento>(ubicacionNave13, rotacionNave);
		NaveEnemigaReabas02 = World->SpawnActor<ANaveEnemigaReabastecimiento>(ubicacionNave14, rotacionNave);
		NaveEnemigaNodrizaUnica = World->SpawnActor<ANaveEnemigaNodriza>(ubicacionNave15, rotacionNave);
	}

	NaveEnemigaCaza01->SetPosicion(FVector(400.0f, -300.0f, 250.0f));
	NaveEnemigaCaza02->SetPosicion(FVector(400.0f, 300.0f, 250.0f));
	NaveEnemigaTransporte01->SetPosicion(FVector(600.0f, 600.0f, 250.0f));
	NaveEnemigaTransporte02->SetPosicion(FVector(600.0f, -600.0f, 250.0f));
	NaveEnemigaPesada01->SetPosicion(FVector(400.0f, -450.0f, 250.0f));
	NaveEnemigaPesada02->SetPosicion(FVector(400.0f, 450.0f, 250.0f));
	NaveEnemigaDestructor01->SetPosicion(FVector(400.0f, 150.0f, 250.0f));
	NaveEnemigaDestructor01->SetPosicion(FVector(400.0f, -150.0f, 250.0f));
	NaveEnemigaEspia01->SetPosicion(FVector(600.0f, 750.0f, 250.0f));
	NaveEnemigaEspia02->SetPosicion(FVector(600.0f, -750.0f, 250.0f));
	NaveEnemigaRecolector01->SetPosicion(FVector(600.0f, 900.0f, 250.0f));
	NaveEnemigaRecolector02->SetPosicion(FVector(600.0f, -900.0f, 250.0f));
	NaveEnemigaReabas01->SetPosicion(FVector(800.0f, 300.0f, 250.0f));
	NaveEnemigaReabas01->SetPosicion(FVector(800.0f, -300.0f, 250.0f));
	NaveEnemigaNodrizaUnica->SetPosicion(FVector(700.0f, 0.0f, 250.0f));

}
