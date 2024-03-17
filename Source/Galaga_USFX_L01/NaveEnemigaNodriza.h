// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "NaveEnemiga.h"
#include "NaveEnemigaNodriza.generated.h"

/**
 * 
 */
UCLASS()
class GALAGA_USFX_L01_API ANaveEnemigaNodriza : public ANaveEnemiga
{
	GENERATED_BODY()

protected:

	virtual void BeginPlay() override;

private:

	int CantidadMiniNaves;

public:

	ANaveEnemigaNodriza();
	virtual void Tick(float DeltaTime) override;
	FORCEINLINE int GetCantidadMiniNaves() const { return CantidadMiniNaves; }
	FORCEINLINE void SetCantidadMiniNaves(int _CantidadMiniNaves) { CantidadMiniNaves = _CantidadMiniNaves; }

protected:
	float LimiteDerecho;
	float LimiteIzquierdo;
	virtual void Mover(float DeltaTime);
	virtual void Disparar();
};
