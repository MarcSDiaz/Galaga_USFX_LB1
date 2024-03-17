// Fill out your copyright notice in the Description page of Project Settings.


#include "EspiaG2.h"

AEspiaG2::AEspiaG2()
{
}

void AEspiaG2::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	Mover(DeltaTime);
}

void AEspiaG2::BeginPlay()
{
	Super::BeginPlay();
}

void AEspiaG2::Mover(float DeltaTime)
{
	FVector PosicionActual = GetActorLocation();
	float Velocidad = -35.0f;
	FVector NuevaPosicion = PosicionActual + FVector(Velocidad * DeltaTime, 0.0f, 0.0f);
	SetActorLocation(NuevaPosicion);
}
