// Fill out your copyright notice in the Description page of Project Settings.


#include "TransporteG2.h"

ATransporteG2::ATransporteG2()
{

}

void ATransporteG2::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	Mover(DeltaTime);
}

void ATransporteG2::BeginPlay()
{
	Super::BeginPlay();
}

void ATransporteG2::Mover(float DeltaTime)
{
	FVector PosicionActual = GetActorLocation();
	float Velocidad = -35.0f;
	FVector NuevaPosicion = PosicionActual + FVector(Velocidad * DeltaTime, 0.0f, 0.0f);
	SetActorLocation(NuevaPosicion);
}
