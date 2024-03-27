// Fill out your copyright notice in the Description page of Project Settings.

#pragma once
#include "Movimiento1.h"
#include "CoreMinimal.h"
#include "NaveEnemigaTransporte.h"
#include "TransporteG2.generated.h"

/**
 * 
 */
UCLASS()
class GALAGA_USFX_L01_API ATransporteG2 : public ANaveEnemigaTransporte
{
	GENERATED_BODY()

public:

	ATransporteG2();
	/*virtual void Tick(float DeltaTime) override;*/

protected:

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Movimiento")
	UMovimiento1* MVertical;//Declaramos Mvertical con puntero de la clase Actor Componente Movimiento1
	/*virtual void BeginPlay() override;*/
	virtual void Mover(float DeltaTime) override;
};
