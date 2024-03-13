// Fill out your copyright notice in the Description page of Project Settings.


#include "NaveEnemigaNodriza.h"

void ANaveEnemigaNodriza::BeginPlay()
{
	Super::BeginPlay();
}

ANaveEnemigaNodriza::ANaveEnemigaNodriza()
{
	static ConstructorHelpers::FObjectFinder<UStaticMesh> ShipMesh(TEXT("/Script/Engine.StaticMesh'/Game/StarterContent/Shapes/Shape_Sphere.Shape_Sphere'"));
	mallaNaveEnemiga->SetStaticMesh(ShipMesh.Object);
}

void ANaveEnemigaNodriza::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	Mover(DeltaTime);
}

void ANaveEnemigaNodriza::Mover(float DeltaTime)
{
	FVector PosicionActual = GetActorLocation();
	float Velocidad = -40.0f;
	FVector NuevaPosicion = PosicionActual + FVector(Velocidad * DeltaTime, 0.0f, 0.0f);
	SetActorLocation(NuevaPosicion);
}

void ANaveEnemigaNodriza::Disparar()
{
}
