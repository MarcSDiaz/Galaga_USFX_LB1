// Copyright Epic Games, Inc. All Rights Reserved.

#include "Galaga_USFX_L01GameMode.h"
#include "Galaga_USFX_L01Pawn.h"
#include "CazaG1.h"
#include "CazaG2.h"
#include "DestructorG1.h"
#include "DestructorG2.h"
#include "EspiaG1.h"
#include "EspiaG2.h"
#include "PesadaG1.h"
#include "PesadaG2.h"
#include "ReabastecimientoG1.h"
#include "ReabastecimientoG2.h"
#include "RecolectorG1.h"
#include "RecolectorG2.h"
#include "TransporteG1.h"
#include "TransporteG2.h"
#include "NaveEnemigaNodriza.h"
//#include "NaveEnemiga.h"
//#include "NaveEnemigaTransporte.h"
//#include "NaveEnemigaCaza.h"
//#include "NaveEnemigaPesada.h"
//#include "NaveEnemigaDestructor.h"
//#include "NaveEnemigaEspia.h"
//#include "NaveEnemigaRecolector.h"
//#include "NaveEnemigaReabastecimiento.h"
//#include "NaveEnemigaNodriza.h"

AGalaga_USFX_L01GameMode::AGalaga_USFX_L01GameMode()
{
	// set default pawn class to our character class
	DefaultPawnClass = AGalaga_USFX_L01Pawn::StaticClass();
	PrimaryActorTick.bCanEverTick = true;

	//NaveEnemiga01 = nullptr;
}

void AGalaga_USFX_L01GameMode::BeginPlay()
{
	Super::BeginPlay();
	
	FVector LocNavesDestructores = FVector(0.0f, -900.0f, 250.0f);
	FVector LocNavesCaza = FVector(100.0f, -750.0f, 250.0f);
	FVector LocNavesEspias = FVector(200.0f, -900.0f, 250.0f);
	FVector LocNavesRecolectoras = FVector(300.0f, -600.0f, 250.0f);
	FVector LocNavesReabastecimiento = FVector(500.0f, -600.0f, 250.0f);
	FVector LocNavesPesadas = FVector(400.0f, -400.0f, 250.0f);
	FVector LocNavesTransporte = FVector(250.0f, -750.0f, 250.0f);
	FVector LocNavesNodriza = FVector(500.0f, 0.0f, 205.0f);
	//Set the game state to playing
	//FVector LocCaza01 = FVector(400.0f, -300.0f, 250.0f);//Ubicacion del Caza01
	//FVector LocCaza02 = FVector(400.0f, 300.0f, 250.0f);//Ubicacion del Caza02
	//FVector LocDes01 = FVector(400.0f, -150.0f, 250.0f);//Ubicacion del Des01
	//FVector LocDes02 = FVector(400.0f, 150.0f, 250.0f);//Ubicacion del Des02
	//FVector LocEspia01 = FVector(600.0f, 750.0f, 250.0f);//Ubicacion del Espia01
	//FVector LocEspia02 = FVector(600.0f, -750.0f, 250.0f);//Ubicacion del Espia02
	//FVector LocPesada01 = FVector(400.0f, 450.0f, 250.0f);//Ubicacion del Pesada01
	//FVector LocPesada02 = FVector(400.0f, -450.0f, 250.0f);//Ubicacion del Pesada02
	//FVector LocReabas01 = FVector(800.0f, 300.0f, 250.0f);//Ubicacion del Reabas01
	//FVector LocReabas02 = FVector(800.0f, -300.0f, 250.0f);//Ubicacion del Reabas02
	//FVector LocRecolector01 = FVector(600.0f, 900.0f, 250.0f);//Ubicacion del Recolector01
	//FVector LocRecolector02 = FVector(600.0f, -900.0f, 250.0f);//Ubicacion del Recolector02
	//FVector LocTransporte01 = FVector(600.0f, 600.0f, 250.0f);//Ubicacion del Transporte01
	//FVector LocTransporte02 = FVector(600.0f, -600.0f, 250.0f);//Ubicacion del Transporte02
	//FVector LocNodriza = FVector(700.0f, 0.0f, 250.0f);//Ubicacion de la nave Nodriza;
	//FVector ubicacionNave01 = FVector(600.0f, 600.0f, 250.0f);//Transporte01
	//FVector ubicacionNave02 = FVector(400.0f, -300.0f, 250.0f);//Caza01
	//FVector ubicacionNave03 = FVector(400.0f, 300.0f, 250.0f);//Caza02
	//FVector ubicacionNave04 = FVector(600.0f, -600.0f, 250.0f);//Transporte02
	//FVector ubicacionNave05 = FVector(400.0f, -450.0f, 250.0f);//Pesada01
	//FVector ubicacionNave06 = FVector(400.0f, 450.0f, 250.0f);//Pesada02
	//FVector ubicacionNave07 = FVector(400.0f, 150.0f, 250.0f);//Destructor01
	//FVector ubicacionNave08 = FVector(400.0f, -150.0f, 250.0f);//Destructor02
	//FVector ubicacionNave09 = FVector(600.0f, 750.0f, 250.0f);//Espia01
	//FVector ubicacionNave10 = FVector(600.0f, -750.0f, 250.0f);//Espia02
	//FVector ubicacionNave11 = FVector(600.0f, 900.0f, 250.0f);//Recolector01
	//FVector ubicacionNave12 = FVector(600.0f, -900.0f, 250.0f);//Recolector02
	//FVector ubicacionNave13 = FVector(800.0f, 300.0f, 250.0f);//Reabas01
	//FVector ubicacionNave14 = FVector(800.0f, -300.0f, 250.0f);//Reabas02
	//FVector ubicacionNave15 = FVector(700.0f, 0.0f, 250.0f);//Nodriza

	FRotator RotacionNave = FRotator(0.0f, 0.0f, 0.0f);

	UWorld* const World = GetWorld();
	if (World != nullptr)
	{
		// spawn the projectile
		for (int i = 0; i < 3; i++) {

			FVector PosicionActual = FVector(LocNavesNodriza.X, LocNavesNodriza.Y, LocNavesNodriza.Z);
			ANaveEnemigaNodriza* NodrizaTemporal = World->SpawnActor<ANaveEnemigaNodriza>(LocNavesNodriza, RotacionNave);
			LocNavesNodriza.X = LocNavesNodriza.X + 150.0f;

			TANavesEnemigas.Push(NodrizaTemporal);
		}
		for (int i = 0; i < 8; i++) {

			if (i < 4) {
				FVector PosicionActual = FVector(LocNavesTransporte.X, LocNavesTransporte.X, LocNavesTransporte.Z);
				ATransporteG1* TransporteG1Temporal = World->SpawnActor<ATransporteG1>(LocNavesTransporte, RotacionNave);
				LocNavesTransporte.X = LocNavesTransporte.X + 100.0f;

				TANavesEnemigas.Push(TransporteG1Temporal);
			}
			else {
				if (i == 4) {
					LocNavesTransporte.X = 250.0f;
				}
				LocNavesTransporte.Y = 750.0f;
				FVector PosicionActual = FVector(LocNavesTransporte.X, LocNavesTransporte.Y, LocNavesTransporte.Z);
				ATransporteG2* TransporteG2Temporal = World->SpawnActor<ATransporteG2>(LocNavesTransporte, RotacionNave);
				LocNavesTransporte.X = LocNavesTransporte.X + 100.0f;

				TANavesEnemigas.Push(TransporteG2Temporal);
			}
		}
		for (int i = 0; i < 4; i++){
			
			if (i < 2) {
				FVector PosicionActual = FVector(LocNavesPesadas.X, LocNavesPesadas.Y, LocNavesPesadas.Z);
				APesadaG1* PesadaG1Temporal = World->SpawnActor<APesadaG1>(LocNavesPesadas, RotacionNave);
				LocNavesPesadas.Y = LocNavesPesadas.Y + 800.0f;

				TANavesEnemigas.Push(PesadaG1Temporal);
			}
			else {
				LocNavesPesadas.X = 550.0f;
				if (i == 2) {
					LocNavesPesadas.Y = 400.0f;
				}
				FVector PoscionActual = FVector(LocNavesPesadas.X, LocNavesPesadas.Y, LocNavesPesadas.Z);
				APesadaG2* PesadaG2Temporal = World->SpawnActor<APesadaG2>(LocNavesPesadas, RotacionNave);
				LocNavesPesadas.Y = LocNavesPesadas.Y - 800.0f;

				TANavesEnemigas.Push(PesadaG2Temporal);
			}
		}
		for (int i = 0; i < 2; i++) {

			FVector PosicionActual = FVector(LocNavesReabastecimiento.X, LocNavesReabastecimiento.Y, LocNavesReabastecimiento.Z);
			AReabastecimientoG1* ReabastecimientoG1Temporal = World->SpawnActor<AReabastecimientoG1>(LocNavesReabastecimiento, RotacionNave);
			LocNavesReabastecimiento.Y = LocNavesReabastecimiento.Y + 1200.0f;

			TANavesEnemigas.Push(ReabastecimientoG1Temporal);
		}
		LocNavesReabastecimiento.X = 700.0f;
		LocNavesReabastecimiento.Y = 600.0f;
		for (int i = 0; i < 2; i++) {

			FVector PoscionActual = FVector(LocNavesReabastecimiento.X, LocNavesReabastecimiento.Y, LocNavesReabastecimiento.Z);
			AReabastecimientoG2* ReabastecimientoG2Temporal = World->SpawnActor<AReabastecimientoG2>(LocNavesReabastecimiento, RotacionNave);
			LocNavesReabastecimiento.Y = LocNavesReabastecimiento.Y - 1200.0f;

			TANavesEnemigas.Push(ReabastecimientoG2Temporal);
		}
		for (int i = 0; i < 2; i++){

			FVector PosicionActual = FVector(LocNavesRecolectoras.X, LocNavesRecolectoras.Y, LocNavesRecolectoras.Z);
			ARecolectorG1* RecolectorG1Temporal = World->SpawnActor<ARecolectorG1>(LocNavesRecolectoras,RotacionNave);
			LocNavesRecolectoras.Y = LocNavesRecolectoras.Y + 1200.0f;

			TANavesEnemigas.Push(RecolectorG1Temporal);
		}
		LocNavesRecolectoras.X = 900.0f;
		LocNavesRecolectoras.Y = 600.0f;
		for (int i = 0; i < 2; i++) {

			FVector PoscionActual = FVector(LocNavesRecolectoras.X, LocNavesRecolectoras.Y, LocNavesRecolectoras.Z);
			ARecolectorG2* RecolectorG2Temporal = World->SpawnActor<ARecolectorG2>(LocNavesRecolectoras, RotacionNave);
			LocNavesRecolectoras.Y = LocNavesRecolectoras.Y - 1200.0f;

			TANavesEnemigas.Push(RecolectorG2Temporal);
		}
		for (int i = 0; i < FMath::RandRange(1, 4); i++){

			FVector PosicionActual = FVector(LocNavesEspias.X, LocNavesEspias.Y, LocNavesEspias.Z);
			AEspiaG1* EspiasG1Temporal = World->SpawnActor<AEspiaG1>(LocNavesEspias, RotacionNave);
			LocNavesEspias.Y = LocNavesEspias.Y + 600.0f;

			TANavesEnemigas.Push(EspiasG1Temporal);
		}
		LocNavesEspias.Y = 600.0f;
		for (int i = 0; i < FMath::RandRange(1, 3); i++) {

			FVector PosicionActual = FVector(LocNavesEspias.X, LocNavesEspias.Y, LocNavesEspias.Z);
			AEspiaG2* EspiaG2Temporal = World->SpawnActor<AEspiaG2>(LocNavesEspias, RotacionNave);
			LocNavesEspias.Y = LocNavesEspias.Y - 600.0f;

			TANavesEnemigas.Push(EspiaG2Temporal);
		}
		for (int i = 0; i < FMath::RandRange(1, 4); i++) {

			FVector PosicionActual = FVector(LocNavesDestructores.X, LocNavesDestructores.Y, LocNavesDestructores.Z);
			ADestructorG1* DestructoresG1Temporal = World->SpawnActor<ADestructorG1>(LocNavesDestructores, RotacionNave);
			LocNavesDestructores.Y = LocNavesDestructores.Y + 600.0f;

			TANavesEnemigas.Push(DestructoresG1Temporal);
		}
		LocNavesDestructores.Y = 600.0f;
		for (int i = 0; i < FMath::RandRange(1, 3); i++) {

			FVector PosicionActual = FVector(LocNavesDestructores.X, LocNavesDestructores.Y, LocNavesDestructores.Z);
			ADestructorG2* DestructoresG2Temporal = World->SpawnActor<ADestructorG2>(LocNavesDestructores, RotacionNave);
			LocNavesDestructores.Y = LocNavesDestructores.Y - 600.0f;

			TANavesEnemigas.Push(DestructoresG2Temporal);
		}
		for(int i = 0; i < FMath::RandRange(1, 3); i++){

			FVector PosicionActual = FVector(LocNavesCaza.X, LocNavesCaza.Y, LocNavesCaza.Z);
			ACazaG1* CazasG1Temporal = World->SpawnActor<ACazaG1>(LocNavesCaza, RotacionNave);
			LocNavesCaza.Y = LocNavesCaza.Y + 600.0f;

			TANavesEnemigas.Push(CazasG1Temporal);
		}
		LocNavesCaza.Y = 750.0f;
		for (int i = 0; i < FMath::RandRange(1, 3); i++) {

			FVector PosicionActual = FVector(LocNavesCaza.X, LocNavesCaza.Y, LocNavesCaza.Z);
			ACazaG2* CazasG2Temporal = World->SpawnActor<ACazaG2>(LocNavesCaza, RotacionNave);
			LocNavesCaza.Y = LocNavesCaza.Y - 600.0f;

			TANavesEnemigas.Push(CazasG2Temporal);
		}
		/*Caza01 = World->SpawnActor<ACazaG1>(LocCaza01, rotacionNave);
		Caza02 = World->SpawnActor<ACazaG2>(LocCaza02, rotacionNave);
		Des01 = World->SpawnActor<ADestructorG1>(LocDes01, rotacionNave);
		Des02 = World->SpawnActor<ADestructorG2>(LocDes02, rotacionNave);
		Espia01 = World->SpawnActor<AEspiaG1>(LocEspia01, rotacionNave);
		Espia02 = World->SpawnActor<AEspiaG2>(LocEspia02, rotacionNave);
		Pesada01 = World->SpawnActor<APesadaG1>(LocPesada01, rotacionNave);
		Pesada02 = World->SpawnActor<APesadaG2>(LocPesada02, rotacionNave);
		Reabas01 = World->SpawnActor<AReabastecimientoG1>(LocReabas01, rotacionNave);
		Reabas02 = World->SpawnActor<AReabastecimientoG2>(LocReabas02, rotacionNave);
		Recolector01 = World->SpawnActor<ARecolectorG1>(LocRecolector01, rotacionNave);
		Recolector02 = World->SpawnActor<ARecolectorG2>(LocRecolector02, rotacionNave);
		Transporte01 = World->SpawnActor<ATransporteG1>(LocTransporte01, rotacionNave);
		Transporte02 = World->SpawnActor<ATransporteG2>(LocTransporte02, rotacionNave);
		Nodriza = World->SpawnActor<ANaveEnemigaNodriza>(LocNodriza, rotacionNave);	*/	
		/*NaveEnemigaTransporte01 = World->SpawnActor<ANaveEnemigaTransporte>(ubicacionNave01, rotacionNave);
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
		NaveEnemigaNodrizaUnica = World->SpawnActor<ANaveEnemigaNodriza>(ubicacionNave15, rotacionNave);*/
	}


	/*Caza01->SetPosicion(FVector(400.0f, -300.0f, 250.0f));
	Caza02->SetPosicion(FVector(400.0f, 300.0f, 250.0f));
	Des01->SetPosicion(FVector(400.0f, 150.0f, 250.0f));
	Des02->SetPosicion(FVector(400.0f, 150.0f, 250.0f));
	Espia01->SetPosicion(FVector(600.0f, 750.0f, 250.0f));
	Espia02->SetPosicion(FVector(600.0f, -750.0f, 250.0f));
	Pesada01->SetPosicion(FVector(400.0f, 450.0f, 250.0f));
	Pesada02->SetPosicion(FVector(400.0f, -450.0f, 250.0f));
	Reabas01->SetPosicion(FVector(800.0f, 300.0f, 250.0f));
	Reabas02->SetPosicion(FVector(800.0f, -300.0f, 250.0f));
	Recolector01->SetPosicion(FVector(600.0f, 900.0f, 250.0f));
	Recolector02->SetPosicion(FVector(600.0f, -900.0f, 250.0f));
	Transporte01->SetPosicion(FVector(600.0f, 600.0f, 250.0f));
	Transporte02->SetPosicion(FVector(600.0f, -600.0f, 250.0f));
	Nodriza->SetPosicion(FVector(700.0f, 0.0f, 250.0f));*/

	/*NaveEnemigaCaza01->SetPosicion(FVector(400.0f, -300.0f, 250.0f));
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
	NaveEnemigaNodrizaUnica->SetPosicion(FVector(700.0f, 0.0f, 250.0f));*/

}
