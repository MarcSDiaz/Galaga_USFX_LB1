// Fill out your copyright notice in the Description page of Project Settings.


#include "PesadaG2.h"

APesadaG2::APesadaG2()
{

}

void APesadaG2::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	Mover(DeltaTime);
}

void APesadaG2::BeginPlay()
{
	Super::BeginPlay();
}

void APesadaG2::Mover(float DeltaTime)
{
	FVector PosicionActual = GetActorLocation();
	float Velocidad = -35.0f;
	FVector NuevaPosicion = PosicionActual + FVector(Velocidad * DeltaTime, 0.0f, 0.0f);
	SetActorLocation(NuevaPosicion);
}
