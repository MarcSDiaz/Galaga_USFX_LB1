// Fill out your copyright notice in the Description page of Project Settings.


#include "NaveEnemigaRecolector.h"

ANaveEnemigaRecolector::ANaveEnemigaRecolector()
{
	static ConstructorHelpers::FObjectFinder<UStaticMesh> ShipMesh(TEXT("/Script/Engine.StaticMesh'/Game/StarterContent/Shapes/Shape_Cylinder.Shape_Cylinder'"));
	mallaNaveEnemiga->SetStaticMesh(ShipMesh.Object);
}

void ANaveEnemigaRecolector::Disparar()
{
}
