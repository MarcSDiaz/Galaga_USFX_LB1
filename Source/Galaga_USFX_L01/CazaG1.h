// Fill out your copyright notice in the Description page of Project Settings.

#pragma once
#include "Movimiento2.h"
#include "CoreMinimal.h"
#include "NaveEnemigaCaza.h"
#include "CazaG1.generated.h"

/**
 * 
 */
UCLASS()
class GALAGA_USFX_L01_API ACazaG1 : public ANaveEnemigaCaza
{
	GENERATED_BODY()
	
public:

	ACazaG1();
	/*virtual void Tick(float DeltaTime) override;*/

protected:

	/*UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Movimiento")
	UMovimiento2* Diagonal;*/
	/*virtual void BeginPlay() override;*/
	virtual void Mover(float DeltaTime) override;

};
