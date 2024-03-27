// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "NaveEnemigaDestructor.h"
#include "DestructorG2.generated.h"

/**
 * 
 */
UCLASS()
class GALAGA_USFX_L01_API ADestructorG2 : public ANaveEnemigaDestructor
{
	GENERATED_BODY()

public:

	ADestructorG2();
	virtual void Tick(float DeltaTime) override;
	float Velocidad;

protected:
	float LimiteMaximo;
	float Inicio;
	virtual void BeginPlay() override;
	virtual void Mover(float DeltaTime);
};
