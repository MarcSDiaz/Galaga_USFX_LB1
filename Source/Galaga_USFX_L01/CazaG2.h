// Fill out your copyright notice in the Description page of Project Settings.

#pragma once
#include "Movimiento1.h"
#include "CoreMinimal.h"
#include "NaveEnemigaCaza.h"
#include "CazaG2.generated.h"

/**
 * 
 */
UCLASS()
class GALAGA_USFX_L01_API ACazaG2 : public ANaveEnemigaCaza
{
	GENERATED_BODY()
	
public:

	ACazaG2();
	/*virtual void Tick(float DeltaTime) override;*/

protected:

	/*UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Movimiento")
	UMovimiento1* Diagonal;*/
	/*virtual void BeginPlay() override;*/
	virtual void Mover(float DeltaTime) override;
};
