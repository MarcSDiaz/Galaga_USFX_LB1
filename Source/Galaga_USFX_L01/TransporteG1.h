// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "NaveEnemigaTransporte.h"
#include "TransporteG1.generated.h"

/**
 * 
 */
UCLASS()
class GALAGA_USFX_L01_API ATransporteG1 : public ANaveEnemigaTransporte
{
	GENERATED_BODY()

public:

	ATransporteG1();
	virtual void Tick(float DeltaTime) override;

protected:

	virtual void BeginPlay() override;
	virtual void Mover(float DeltaTime);
};
