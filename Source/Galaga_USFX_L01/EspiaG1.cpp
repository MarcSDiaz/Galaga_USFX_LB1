// Fill out your copyright notice in the Description page of Project Settings.


#include "EspiaG1.h"

AEspiaG1::AEspiaG1()
{
}

void AEspiaG1::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	Mover(DeltaTime);
}

void AEspiaG1::BeginPlay()
{
	Super::BeginPlay();
}

void AEspiaG1::Mover(float DeltaTime)
{
	FVector PosicionActual = GetActorLocation();
	float Velocidad = -35.0f;
	FVector NuevaPosicion = PosicionActual + FVector(Velocidad * DeltaTime, 0.0f, 0.0f);
	SetActorLocation(NuevaPosicion);
}
