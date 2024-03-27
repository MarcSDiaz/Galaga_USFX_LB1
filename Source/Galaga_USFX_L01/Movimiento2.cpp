// Fill out your copyright notice in the Description page of Project Settings.


#include "Movimiento2.h"

// Sets default values for this component's properties
UMovimiento2::UMovimiento2()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;
	/*VCaida = 5.0f;*/
	VCaida = -5.0f;
	VHorizontal = 5.0f;
	// ...
}


// Called when the game starts
void UMovimiento2::BeginPlay()
{
	Super::BeginPlay();
	//Tomamos la posicion inicial de la nave al comienzo del juego.
	AActor* Owner = GetOwner();
	if (Owner)
	{
		PosicionInicial = Owner->GetActorLocation();
	}
	// ...
}


// Called every frame
void UMovimiento2::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);
	AActor* Diagonal2 = GetOwner();
	FVector LimiteDerecho = PosicionInicial + FVector(0.0f, 150.0f , 0.0f);
	/*FVector LimiteIzquierdo = PosicionInicial;*/
	FVector LimiteIzquierdo = PosicionInicial + FVector(0.0f, -150.0f, 0.0f);
	/*FVector LimiteMaximo = PosicionInicial + FVector(-1100.0f, 0.0f, 0.0f);*/
	FVector LimiteMaximo = PosicionInicial + FVector(-300.0f, 0.0f, 0.0f);
	if (Diagonal2) {
		
		FVector PosicionActual = Diagonal2->GetActorLocation();
		/*FVector NuevaPosicion = PosicionActual + FVector(-VCaida, VHorizontal, 0.0f);*///Da un movimiento Diagonal.
		FVector NuevaPosicion = PosicionActual + FVector(VCaida, VHorizontal, 0.0f);
		if(NuevaPosicion.Y == LimiteDerecho.Y)
		{
			VHorizontal = -5.0f;
		}
		/*if (NuevaPosicion.Y == LimiteIzquierdo.Y)
		{
			VHorizontal = 5.0f;
		}*/
		if (NuevaPosicion.X == LimiteMaximo.X)
		{
			/*NuevaPosicion = PosicionInicial;*/
			/*VHorizontal = 5.0f;*/
			VCaida = 5.0f;
			VHorizontal = -5.0f;
		}
		if (NuevaPosicion.Y == LimiteIzquierdo.Y)
		{
			VHorizontal = 5.0f;
		}
		if (NuevaPosicion.X == PosicionInicial.X)
		{
			VCaida = -5.0f;
			VHorizontal = 5.0f;
		}
		Diagonal2->SetActorLocation(NuevaPosicion);
		/*float Velocidad = 5.0f;
		auto NuevaPosicion = Diagonal2->GetActorLocation() + FVector(-Velocidad, Velocidad, 0.0f);
		Diagonal2->SetActorLocation(NuevaPosicion);*/
	}
	// ...
}

