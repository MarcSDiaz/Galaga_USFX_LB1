// Fill out your copyright notice in the Description page of Project Settings.


#include "ReabastecimientoG1.h"

AReabastecimientoG1::AReabastecimientoG1()
{

}

void AReabastecimientoG1::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	Mover(DeltaTime);
}

void AReabastecimientoG1::BeginPlay()
{
	Super::BeginPlay();
}

void AReabastecimientoG1::Mover(float DeltaTime)
{
	FVector PosicionActual = GetActorLocation();
	float Velocidad = -35.0f;
	FVector NuevaPosicion = PosicionActual + FVector(Velocidad * DeltaTime, 0.0f, 0.0f);
	SetActorLocation(NuevaPosicion);
}
