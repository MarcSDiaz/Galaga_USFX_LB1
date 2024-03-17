// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "NaveEnemigaEspia.h"
#include "EspiaG2.generated.h"

/**
 * 
 */
UCLASS()
class GALAGA_USFX_L01_API AEspiaG2 : public ANaveEnemigaEspia
{
	GENERATED_BODY()
public:

	AEspiaG2();
	virtual void Tick(float DeltaTime) override;

protected:

	virtual void BeginPlay() override;
	virtual void Mover(float DeltaTime);
};
