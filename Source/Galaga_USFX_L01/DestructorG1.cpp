// Fill out your copyright notice in the Description page of Project Settings.


#include "DestructorG1.h"

ADestructorG1::ADestructorG1()
{

}

void ADestructorG1::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	Mover(DeltaTime);
}

void ADestructorG1::BeginPlay()
{
	Super::BeginPlay();
}

void ADestructorG1::Mover(float DeltaTime)
{
	FVector PosicionActual = GetActorLocation();
	float Velocidad = -35.0f;
	FVector NuevaPosicion = PosicionActual + FVector(Velocidad * DeltaTime, 0.0f, 0.0f);
	SetActorLocation(NuevaPosicion);

}
