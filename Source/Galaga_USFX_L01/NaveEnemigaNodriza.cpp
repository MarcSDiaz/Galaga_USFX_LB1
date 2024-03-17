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
    LimiteDerecho = 550.0f;
    LimiteIzquierdo = -550.0f;
}

void ANaveEnemigaNodriza::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	Mover(DeltaTime);
}

void ANaveEnemigaNodriza::Mover(float DeltaTime)
{
	FVector PosicionActual = GetActorLocation();
    // Velocidad de movimiento
    float Velocidad = 40.0f;
    // Determina si la nave se está moviendo hacia la derecha o hacia la izquierda
    static bool MovimientoDerecha = true;
    // Actualiza la posición de la nave en función de la dirección de movimiento
    if (MovimientoDerecha)
    {
        // Si la nave se está moviendo hacia la derecha, aumenta su posición en el eje X
        PosicionActual.Y += Velocidad * DeltaTime;
        // Comprueba si la nave ha alcanzado el límite derecho
        if (PosicionActual.Y >= LimiteDerecho)
        {
            // Si alcanza el límite derecho, cambia la dirección del movimiento a la izquierda
            MovimientoDerecha = false;
        }
    }
    else
    {
        // Si la nave se está moviendo hacia la izquierda, disminuye su posición en el eje X
        PosicionActual.Y -= Velocidad * DeltaTime;
        // Comprueba si la nave ha alcanzado el límite izquierdo
        if (PosicionActual.Y <= LimiteIzquierdo)
        {
            // Si alcanza el límite izquierdo, cambia la dirección del movimiento a la derecha
            MovimientoDerecha = true;
        }
    }
    // Establece la nueva posición de la nave
    SetActorLocation(PosicionActual);
	/*float Velocidad = -40.0f;
	FVector NuevaPosicion = PosicionActual + FVector(Velocidad * DeltaTime, 0.0f, 0.0f);
	SetActorLocation(NuevaPosicion);*/
}

void ANaveEnemigaNodriza::Disparar()
{
}
