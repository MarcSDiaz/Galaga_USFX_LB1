// Fill out your copyright notice in the Description page of Project Settings.

#pragma once
#include "Movimiento3.h"
#include "CoreMinimal.h"
#include "NaveEnemigaTransporte.h"
#include "TransporteG1.generated.h"
//class Movimiento2;
/**
 * 
 */

UCLASS()
class GALAGA_USFX_L01_API ATransporteG1 : public ANaveEnemigaTransporte
{
	GENERATED_BODY()

public:

	ATransporteG1();
	/*virtual void Tick(float DeltaTime) override;*/

protected:

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Movimiento")
	UMovimiento3* MVertical;//Declaramos con puntero MVertical de la clase Movmiento3
	/*virtual void BeginPlay() override;*/
	virtual void Mover(float DeltaTime) override;
};
