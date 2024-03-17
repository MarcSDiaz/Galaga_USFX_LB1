// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "NaveEnemigaEspia.h"
#include "EspiaG1.generated.h"

/**
 * 
 */
UCLASS()
class GALAGA_USFX_L01_API AEspiaG1 : public ANaveEnemigaEspia
{
	GENERATED_BODY()
public:

	AEspiaG1();
	virtual void Tick(float DeltaTime) override;

protected:

	virtual void BeginPlay() override;
	virtual void Mover(float DeltaTime);
};
