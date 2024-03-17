// Fill out your copyright notice in the Description page of Project Settings.


#include "RecolectorG1.h"

ARecolectorG1::ARecolectorG1()
{

}

void ARecolectorG1::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	Mover(DeltaTime);
}

void ARecolectorG1::BeginPlay()
{
	Super::BeginPlay();
}

void ARecolectorG1::Mover(float DeltaTime)
{
	FVector PosicionActual = GetActorLocation();
	float Velocidad = -35.0f;
	FVector NuevaPosicion = PosicionActual + FVector(Velocidad * DeltaTime, 0.0f, 0.0f);
	SetActorLocation(NuevaPosicion);
}
