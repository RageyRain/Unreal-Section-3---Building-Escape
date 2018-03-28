// Fill out your copyright notice in the Description page of Project Settings.

#include "CannonController.h"

// Sets default values for this component's properties
UCannonController::UCannonController()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	// ...
}


// Called when the game starts
void UCannonController::BeginPlay()
{
	Super::BeginPlay();

	// ...
	
}


// Called every frame
void UCannonController::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	// ...
}



//Handles selection of control component using player vision
///Gets the starting point of the raycast line for player reach
FVector UCannonController::GetReachLineStart()
{
	///Declare containers for camera location and rotation
	FVector CamLoc;
	FRotator CamRot;
	///Fill containers with values from player viewpoint
	GetWorld()->GetFirstPlayerController()->GetPlayerViewPoint(CamLoc, CamRot);
	///Return value of camera location
	return CamLoc;
}

///Gets the Ending point of the raycast line for player reach
FVector UCannonController::GetReachLineEnd()
{
	///Declare containers for camera location and rotation, and calculated Reach end point
	FVector CamLoc;
	FRotator CamRot;
	///Fill containers with values from player viewpoint
	GetWorld()->GetFirstPlayerController()->GetPlayerViewPoint(CamLoc, CamRot);
	///Return calculated end point of reach using camera location and rotation
	return CamLoc + (CamRot.Vector()*ControlReach);
}

///Detects first cannon control component within the raycasted reach line
const FHitResult UCannonController::GetFirstCannonControlInReach()
{
	///Setup parameters of trace query
	FCollisionQueryParams TraceParameters(FName(TEXT("")), false, GetOwner());

	///Declare container for result of line trace
	FHitResult LineTraceHit;
	///Ray-cast out to reach distance
	GetWorld()->LineTraceSingleByObjectType(
		LineTraceHit,
		GetReachLineStart(), ///using calculated value for start of trace
		GetReachLineEnd(), ///using calculated alue for end of trace
		FCollisionObjectQueryParams(ECollisionChannel::ECC_GameTraceChannel1), ///using custom trace channel "ControlComponent"
		TraceParameters
	);
	///Return the first control component the trace detects along the reach line
	return LineTraceHit;
}

