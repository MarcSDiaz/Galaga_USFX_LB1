// Fill out your copyright notice in the Description page of Project Settings.


#include "DestructorG1.h"

ADestructorG1::ADestructorG1()
{
	Velocidad = -450.0f;
	LimiteMaximo = -900.0f;
	Inicio = 200.0f;
}

void ADestructorG1::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	Mover(DeltaTime);
}

void ADestructorG1::BeginPlay()
{
	Super::BeginPlay();
}

void ADestructorG1::Mover(float DeltaTime)
{
	FVector PosicionActual = GetActorLocation();
	FVector NuevaPosicion = PosicionActual + FVector(Velocidad * DeltaTime, 0.0f, 0.0f);
	if (NuevaPosicion.X <= LimiteMaximo)
	{
		Velocidad = Velocidad * -1;
	}
	if (NuevaPosicion.X >= Inicio)
	{
		Velocidad = Velocidad * -1;
	}
	SetActorLocation(NuevaPosicion);
}
