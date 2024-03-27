// Fill out your copyright notice in the Description page of Project Settings.


#include "CazaG1.h"
#include "Movimiento2.h"

ACazaG1::ACazaG1()
{
	/*Diagonal = CreateDefaultSubobject<UMovimiento2>(TEXT("ComponenteDeMovimiento"));

	PrimaryActorTick.bCanEverTick = true;
	PrimaryActorTick.TickGroup = TG_PrePhysics;
	PrimaryActorTick.bStartWithTickEnabled = true;*/
}

//void ACazaG1::Tick(float DeltaTime)
//{
//	Super::Tick(DeltaTime);
//	Mover(DeltaTime);
//}

//void ACazaG1::BeginPlay()
//{
//	Super::BeginPlay();
//}

void ACazaG1::Mover(float DeltaTime)
{
	/*Diagonal = CreateDefaultSubobject<UMovimiento2>(TEXT("ComponenteDeMovimiento"));

	PrimaryActorTick.bCanEverTick = true;
	PrimaryActorTick.TickGroup = TG_PrePhysics;
	PrimaryActorTick.bStartWithTickEnabled = true;*/

	/*FVector PosicionActual = GetActorLocation();
	float Velocidad = -35.0f;
	FVector NuevaPosicion = PosicionActual + FVector(Velocidad * DeltaTime, 0.0f, 0.0f);
	SetActorLocation(NuevaPosicion);*/
}
