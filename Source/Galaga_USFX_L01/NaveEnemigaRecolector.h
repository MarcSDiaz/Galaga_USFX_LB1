// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "NaveEnemiga.h"
#include "NaveEnemigaRecolector.generated.h"

/**
 * 
 */
UCLASS()
class GALAGA_USFX_L01_API ANaveEnemigaRecolector : public ANaveEnemiga
{
	GENERATED_BODY()

private:

	int CantidadRecolectado;

public:

	ANaveEnemigaRecolector();
	FORCEINLINE int GetCantidadRecolectado() const { return CantidadRecolectado; }
	FORCEINLINE void SetCantidadRecolectado(int _CantidadRecolectado) { CantidadRecolectado = _CantidadRecolectado; }

protected:

	virtual void Disparar();
};
