// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "NaveEnemiga.h"
#include "NaveEnemigaDestructor.generated.h"

/**
 * 
 */
UCLASS()
class GALAGA_USFX_L01_API ANaveEnemigaDestructor : public ANaveEnemiga
{
	GENERATED_BODY()

private:

	int TiempoAutodestruirse;

public:

	ANaveEnemigaDestructor();
	FORCEINLINE int GetTiempoAutodestruirse() const { return TiempoAutodestruirse; }
	FORCEINLINE void SetTiempoAutodestruirse(int _TiempoAutodestruirse) { TiempoAutodestruirse = _TiempoAutodestruirse; }

protected:

	virtual void Disparar();
};
