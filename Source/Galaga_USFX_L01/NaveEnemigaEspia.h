// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "NaveEnemiga.h"
#include "NaveEnemigaEspia.generated.h"

/**
 * 
 */
UCLASS()
class GALAGA_USFX_L01_API ANaveEnemigaEspia : public ANaveEnemiga
{
	GENERATED_BODY()

private:

	int TiempoInvisible;

public:
	ANaveEnemigaEspia();
	FORCEINLINE int GetTiempoInvisible() const { return TiempoInvisible; }
	FORCEINLINE void SetTimepoInvisible(int _TiempoInvisible) { TiempoInvisible = _TiempoInvisible; }

protected:
	virtual void Mover();
	virtual void Disparar();
};
