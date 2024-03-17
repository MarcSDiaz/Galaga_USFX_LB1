// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "NaveEnemigaReabastecimiento.h"
#include "ReabastecimientoG1.generated.h"

/**
 * 
 */
UCLASS()
class GALAGA_USFX_L01_API AReabastecimientoG1 : public ANaveEnemigaReabastecimiento
{
	GENERATED_BODY()

public:

	AReabastecimientoG1();
	virtual void Tick(float DeltaTime) override;

protected:

	virtual void BeginPlay() override;
	virtual void Mover(float DeltaTime);
};
