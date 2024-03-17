// Fill out your copyright notice in the Description page of Project Settings.


#include "RecolectorG2.h"

ARecolectorG2::ARecolectorG2()
{

}

void ARecolectorG2::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	Mover(DeltaTime);
}

void ARecolectorG2::BeginPlay()
{
	Super::BeginPlay();
}

void ARecolectorG2::Mover(float DeltaTime)
{
	FVector PosicionActual = GetActorLocation();
	float Velocidad = -35.0f;
	FVector NuevaPosicion = PosicionActual + FVector(Velocidad * DeltaTime, 0.0f, 0.0f);
	SetActorLocation(NuevaPosicion);
}
