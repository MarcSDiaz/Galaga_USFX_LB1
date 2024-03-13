// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "NaveEnemiga.h"
#include "NaveEnemigaCaza.generated.h"

/**
 * 
 */
UCLASS()
class GALAGA_USFX_L01_API ANaveEnemigaCaza : public ANaveEnemiga
{
	GENERATED_BODY()

protected:
	virtual void BeginPlay() override;

private:
	int CantidadBombas;

public:
	ANaveEnemigaCaza();
	virtual void Tick(float DeltaTime) override;
	FORCEINLINE int GetCantidadBombas() const { return CantidadBombas; }
	FORCEINLINE void SetCantidadBombas(int _CantidadBombas) { CantidadBombas = _CantidadBombas; }
protected:
	virtual void Mover(float DeltaTime);
	virtual void Disparar();
};