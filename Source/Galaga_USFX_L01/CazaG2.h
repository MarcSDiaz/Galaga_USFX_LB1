// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "NaveEnemigaCaza.h"
#include "CazaG2.generated.h"

/**
 * 
 */
UCLASS()
class GALAGA_USFX_L01_API ACazaG2 : public ANaveEnemigaCaza
{
	GENERATED_BODY()
	
public:

	ACazaG2();
	virtual void Tick(float DeltaTime) override;

protected:

	virtual void BeginPlay() override;
	virtual void Mover(float DeltaTime);
};
