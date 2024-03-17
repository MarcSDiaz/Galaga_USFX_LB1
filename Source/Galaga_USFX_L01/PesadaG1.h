// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "NaveEnemigaPesada.h"
#include "PesadaG1.generated.h"

/**
 * 
 */
UCLASS()
class GALAGA_USFX_L01_API APesadaG1 : public ANaveEnemigaPesada
{
	GENERATED_BODY()

public:

	APesadaG1();
	virtual void Tick(float DeltaTime) override;

protected:

	virtual void BeginPlay() override;
	virtual void Mover(float DeltaTime);
};

