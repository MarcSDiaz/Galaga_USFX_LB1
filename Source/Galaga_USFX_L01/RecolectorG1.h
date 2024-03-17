// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "NaveEnemigaRecolector.h"
#include "RecolectorG1.generated.h"

/**
 * 
 */
UCLASS()
class GALAGA_USFX_L01_API ARecolectorG1 : public ANaveEnemigaRecolector
{
	GENERATED_BODY()
public:

	ARecolectorG1();
	virtual void Tick(float DeltaTime) override;

protected:

	virtual void BeginPlay() override;
	virtual void Mover(float DeltaTime);
};