// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "Grabber.generated.h"



UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class BUILDING_ESCAPE2_API UGrabber : public UActorComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	UGrabber();

protected:
	// Called when the game starts
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

private:

	UPROPERTY(VisibleAnywhere)
	float Reach = 120.0f;

	class UPhysicsHandleComponent* PhysicsHandle = nullptr;
	class UInputComponent* InputComponent = nullptr;
	
	//Ray-cast and grab what's in reach
	void Grab();

	//Called when Grab is released
	void Release();

	//Finds attached physics component
	void FindPhysicsHandleComponent();

	//Finds and sets up attached Input component
	void SetupInputComponent();

	//Return hit for first physics body in reach
	const FHitResult GetFirstPhysicsBodyInReach();
	
	//Gets the end of the Raycast line for reach
	FVector GetReachLineEnd();

	//Gets the start of the Raycast line for reach
	FVector GetReachLineStart();

};
