// Fill out your copyright notice in the Description page of Project Settings.


#include "NaveEnemigaCaza.h"
#include "Movimiento2.h"//Se llama a la libreria movimiento

//void ANaveEnemigaCaza::BeginPlay()
//{
//	Super::BeginPlay();
//}

ANaveEnemigaCaza::ANaveEnemigaCaza()
{
	static ConstructorHelpers::FObjectFinder<UStaticMesh> ShipMesh(TEXT("StaticMesh'/Game/StarterContent/Shapes/Shape_TriPyramid.Shape_TriPyramid'"));
	mallaNaveEnemiga->SetStaticMesh(ShipMesh.Object);
	Mover(0.0f);//Llamamos al metodo mover
	/*Diagonal = CreateDefaultSubobject<UMovimiento2>(TEXT("ComponenteDeMovimiento"));

	PrimaryActorTick.bCanEverTick = true;
	PrimaryActorTick.TickGroup = TG_PrePhysics;
	PrimaryActorTick.bStartWithTickEnabled = true;*/
}


//void ANaveEnemigaCaza::Tick(float DeltaTime)
//{
//	Super::Tick(DeltaTime);
//	Mover(DeltaTime);
//}

void ANaveEnemigaCaza::Mover(float DeltaTime)
{
	/*FVector PosicionActual = GetActorLocation();
	float Velocidad = -35.0f;
	FVector NuevaPosicion = PosicionActual + FVector(Velocidad * DeltaTime, 0.0f, 0.0f);
	SetActorLocation(NuevaPosicion);*/
	//Le damos el Actor Componente Movimiento2.
	Diagonal = CreateDefaultSubobject<UMovimiento2>(TEXT("ComponenteDeMovimiento"));

	PrimaryActorTick.bCanEverTick = true;
	PrimaryActorTick.TickGroup = TG_PrePhysics;
	PrimaryActorTick.bStartWithTickEnabled = true;
}

void ANaveEnemigaCaza::Disparar()
{
}
