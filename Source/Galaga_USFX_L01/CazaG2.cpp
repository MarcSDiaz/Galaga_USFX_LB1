// Fill out your copyright notice in the Description page of Project Settings.


#include "CazaG2.h"

ACazaG2::ACazaG2()
{
}

void ACazaG2::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	Mover(DeltaTime);

}

void ACazaG2::BeginPlay()
{
	Super::BeginPlay();
}

void ACazaG2::Mover(float DeltaTime)
{
	FVector PosicionActual = GetActorLocation();
	float Velocidad = -35.0f;
	FVector NuevaPosicion = PosicionActual + FVector(Velocidad * DeltaTime, 0.0f, 0.0f);
	SetActorLocation(NuevaPosicion);
}
