// Fill out your copyright notice in the Description page of Project Settings.


#include "TransporteG2.h"
#include "Movimiento1.h"//Añadimos la libreria Movimiento1.

ATransporteG2::ATransporteG2()
{
	/*MVertical = CreateDefaultSubobject<UMovimiento1>(TEXT("ComponenteDeMovimiento"));

	PrimaryActorTick.bCanEverTick = true;
	PrimaryActorTick.TickGroup = TG_PrePhysics;
	PrimaryActorTick.bStartWithTickEnabled = true;*/
	Mover(0.0f);//Llamamos al metodo Mover
}

//Eliminamos los metodos Tick y BeginPlay, ya que la clase Actor Componente Movimiento 3 ya incluye estos mismos metodos

//void ATransporteG2::Tick(float DeltaTime)
//{
//	Super::Tick(DeltaTime);
//	/*Mover(DeltaTime);*/
//}
//
//void ATransporteG2::BeginPlay()
//{
//	Super::BeginPlay();
//}

void ATransporteG2::Mover(float DeltaTime)
{
	//Le damos el actor componente Movimiento1
	MVertical = CreateDefaultSubobject<UMovimiento1>(TEXT("ComponenteDeMovimiento"));

	PrimaryActorTick.bCanEverTick = true;
	PrimaryActorTick.TickGroup = TG_PrePhysics;
	PrimaryActorTick.bStartWithTickEnabled = true;
}

