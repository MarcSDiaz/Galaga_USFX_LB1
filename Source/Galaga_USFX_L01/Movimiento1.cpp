// Fill out your copyright notice in the Description page of Project Settings.


#include "Movimiento1.h"

// Sets default values for this component's properties
UMovimiento1::UMovimiento1()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;
	Velocidad = -25.0f;
	// ...
}


// Called when the game starts
void UMovimiento1::BeginPlay()
{
	Super::BeginPlay();

	// ...
	//Tomamos la posicion inicial de la nave al comienzo del juego
	AActor* Owner = GetOwner();
	if (Owner)
	{
		PosicionInicial = Owner->GetActorLocation();
	}
}


// Called every frame
void UMovimiento1::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);
	// ...
	AActor* MVertical2 = GetOwner();
	float LimiteMaximo = -750.0f;
	if (MVertical2)
	{
		FVector PosicionActual = MVertical2->GetActorLocation();
		FVector NuevaPosicion = PosicionActual + FVector(0.0f, Velocidad, 0.0f);

		if (NuevaPosicion.Y <= LimiteMaximo)
		{
			Velocidad = 25.0f;
		}
		if (NuevaPosicion.Y >= 750)
		{
			Velocidad = -25.0f;
		}

		MVertical2->SetActorLocation(NuevaPosicion);
	}
}

