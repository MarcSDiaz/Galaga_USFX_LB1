// Fill out your copyright notice in the Description page of Project Settings.


#include "TransporteG1.h"

ATransporteG1::ATransporteG1()
{

}

void ATransporteG1::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	Mover(DeltaTime);
}

void ATransporteG1::BeginPlay()
{
	Super::BeginPlay();
}

void ATransporteG1::Mover(float DeltaTime)
{
	FVector PosicionActual = GetActorLocation();
	float Velocidad = -35.0f;
	FVector NuevaPosicion = PosicionActual + FVector(Velocidad * DeltaTime, 0.0f, 0.0f);
	SetActorLocation(NuevaPosicion);
}
