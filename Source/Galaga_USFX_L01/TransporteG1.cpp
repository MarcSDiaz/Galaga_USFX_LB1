// Fill out your copyright notice in the Description page of Project Settings.


#include "TransporteG1.h"
#include "Movimiento3.h"//Llamamos a la libreria Movimiento3

ATransporteG1::ATransporteG1()
{
	/*MVertical = CreateDefaultSubobject<UMovimiento3>(TEXT("ComponenteDeMovimiento"));

	PrimaryActorTick.bCanEverTick = true;
	PrimaryActorTick.TickGroup = TG_PrePhysics;
	PrimaryActorTick.bStartWithTickEnabled = true;*/
	Mover(0.0f);//Llamamos al metodo mover
}

//Eliminamos los metodos Tick y BeginPlay, ya que la clase Actor Componente Movimiento 3 ya incluye estos mismos metodos

//void ATransporteG1::Tick(float DeltaTime)
//{
//	Super::Tick(DeltaTime);
//	Mover(DeltaTime);
//}

//void ATransporteG1::BeginPlay()
//{
//	Super::BeginPlay();
//}

void ATransporteG1::Mover(float DeltaTime)
{
	//Le damos al metodo mover, el actor componente Movimiento3.
	MVertical = CreateDefaultSubobject<UMovimiento3>(TEXT("ComponenteDeMovimiento"));

	PrimaryActorTick.bCanEverTick = true;
	PrimaryActorTick.TickGroup = TG_PrePhysics;
	PrimaryActorTick.bStartWithTickEnabled = true;
}
