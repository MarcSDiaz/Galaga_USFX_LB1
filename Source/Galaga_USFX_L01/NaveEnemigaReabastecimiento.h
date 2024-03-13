// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "NaveEnemiga.h"
#include "NaveEnemigaReabastecimiento.generated.h"

/**
 * 
 */
UCLASS()
class GALAGA_USFX_L01_API ANaveEnemigaReabastecimiento : public ANaveEnemiga
{
	GENERATED_BODY()

private:

	int CantidadMunicion;

public:

	ANaveEnemigaReabastecimiento();
	FORCEINLINE int GetCantidadMunicion() const { return CantidadMunicion; }
	FORCEINLINE void SetCantidadMunicion(int _CantidadMunicion) { CantidadMunicion = _CantidadMunicion; }

protected:

	virtual void Mover();
	virtual void Disparar();
};
