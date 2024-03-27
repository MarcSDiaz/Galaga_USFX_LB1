// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "Movimiento2.generated.h"


UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class GALAGA_USFX_L01_API UMovimiento2 : public UActorComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	UMovimiento2();
	/*UPROPERTY()*/
	float VCaida;//Declaramos la velocidad de caida
	float VHorizontal;//Declaramos la velocidad horizontal

protected:
	// Called when the game starts
	virtual void BeginPlay() override;
	FVector PosicionInicial;//Declaramos la posicion inicial de la nave
public:	
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

		
};
