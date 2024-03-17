// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "NaveEnemiga.h"
#include "NaveEnemigaPesada.generated.h"

/**
 * 
 */
UCLASS()
class GALAGA_USFX_L01_API ANaveEnemigaPesada : public ANaveEnemiga
{
	GENERATED_BODY()

private:

	int CantidadVidaExtra;

public:

	ANaveEnemigaPesada();
	FORCEINLINE int GetCantidadVidaExtra() const { return CantidadVidaExtra; }
	FORCEINLINE void SetCantidadVidaExtra(int _CantidadVidaExtra) { CantidadVidaExtra = _CantidadVidaExtra; }

protected:

	virtual void Disparar();
};
