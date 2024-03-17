// Fill out your copyright notice in the Description page of Project Settings.


#include "ReabastecimientoG2.h"

AReabastecimientoG2::AReabastecimientoG2()
{

}

void AReabastecimientoG2::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	Mover(DeltaTime);
}

void AReabastecimientoG2::BeginPlay()
{
	Super::BeginPlay();
}

void AReabastecimientoG2::Mover(float DeltaTime)
{
	FVector PosicionActual = GetActorLocation();
	float Velocidad = -35.0f;
	FVector NuevaPosicion = PosicionActual + FVector(Velocidad * DeltaTime, 0.0f, 0.0f);
	SetActorLocation(NuevaPosicion);
}
