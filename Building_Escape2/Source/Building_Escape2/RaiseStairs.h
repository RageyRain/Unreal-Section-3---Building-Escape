// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/TriggerVolume.h"
#include "Components/ActorComponent.h"
#include "RaiseStairs.generated.h"

DECLARE_DYNAMIC_MULTICAST_DELEGATE(FStairsEvent);


UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class BUILDING_ESCAPE2_API URaiseStairs : public UActorComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	URaiseStairs();

protected:
	// Called when the game starts
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

	UPROPERTY(BlueprintAssignable)
	FStairsEvent OnRaise;

	UPROPERTY(BlueprintAssignable)
	FStairsEvent OnLower;


private:
	UPROPERTY(EditAnywhere)
	ATriggerVolume* PressurePlate = nullptr;

	//The owning stairs
	AActor* Owner = nullptr;
	
	UPROPERTY(EditAnywhere)
	float StairsKeyWeight = 30.0f;

	//Returns mass on plate in kg
	float GetTotalMassOfActorsOnPlate();
};
