// Fill out your copyright notice in the Description page of Project Settings.


#include "Movimiento3.h"

// Sets default values for this component's properties
UMovimiento3::UMovimiento3()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;
	Velocidad = 25.0f;
	// ...
}


// Called when the game starts
void UMovimiento3::BeginPlay()
{
	Super::BeginPlay();
	//Tomamos la posicion inicial de la nave al comiezo del juego
	AActor* Owner = GetOwner();
	if (Owner)
	{
		PosicionInicial = Owner->GetActorLocation();
	}
	// ...
	
}


// Called every frame
void UMovimiento3::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);
	AActor* MVertical = GetOwner();
	float LimiteMaximo = 750;
	if (MVertical)
	{
		/*auto NuevaPosicion = MVertical->GetActorLocation() + FVector(Velocidad, 0.0f, 0.0f);*/
		FVector PosicionActual = MVertical->GetActorLocation();
		FVector NuevaPosicion = PosicionActual + FVector(0.0f, Velocidad, 0.0f);
		//Este movimiento se realiza de abajo a arriba y viceversa
		if (NuevaPosicion.Y>=LimiteMaximo)
		{
			Velocidad = Velocidad * -1;
		}
		if (NuevaPosicion.Y<=-750)
		{
			Velocidad = Velocidad * -1;
		}

		MVertical->SetActorLocation(NuevaPosicion);

	}
	// ...
}

