// Fill out your copyright notice in the Description page of Project Settings.


#include "DestructorG2.h"

ADestructorG2::ADestructorG2()
{

}

void ADestructorG2::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	Mover(DeltaTime);
}

void ADestructorG2::BeginPlay()
{
	Super::BeginPlay();
}

void ADestructorG2::Mover(float DeltaTime)
{
	FVector PosicionActual = GetActorLocation();
	float Velocidad = -1000.0f;
	FVector NuevaPosicion = PosicionActual + FVector(Velocidad * DeltaTime, 0.0f, 0.0f);
	SetActorLocation(NuevaPosicion);
}
