// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "GameFramework/Actor.h"
#include "Engine/World.h"
#include "GameFramework/PlayerController.h"
#include "Classes/Components/InputComponent.h"
#include "CannonController.generated.h"


UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class BUILDING_ESCAPE2_API UCannonController : public UActorComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	UCannonController();

protected:
	// Called when the game starts
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

private:

	UPROPERTY(VisibleAnywhere)
	float ControlReach = 160.0f;
	
	class UInputComponent* InputComponent = nullptr;

	
	//Handles selection of control component using player vision
	///Gets the starting point of the raycast line for player reach
	FVector GetReachLineStart();
	///Gets the Ending point of the raycast line for player reach
	FVector GetReachLineEnd();
	///Detects first cannon control component within the raycasted reach line
	const FHitResult GetFirstCannonControlInReach();

	//Handles interactions with Control Components
	///	//Finds and sets up attached Input component
	void SetupInputComponent();
	///Calls ray-cast and interacts with object in reach
	void InteractUp();
	void InteractDown();

};
