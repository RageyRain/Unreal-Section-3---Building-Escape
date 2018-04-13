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

	SetupInputComponent();

}



// Called every frame
void UCannonController::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);
	
	GetFirstCannonControlInReach();
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
		FCollisionObjectQueryParams(ECollisionChannel::ECC_GameTraceChannel2), ///using custom trace channel "ControlComponent"
		TraceParameters
	);

	/*
	auto ComponentHit = LineTraceHit.GetComponent();
	if (ComponentHit)
	{
		auto ComponentHitStr = ComponentHit->GetReadableName();
		UE_LOG(LogTemp, Warning, TEXT("Detected: %s"), ComponentHitStr;
	}
	*/
	
	///Return the first control component the trace detects along the reach line
	return LineTraceHit;
}




//Handles interactions with Control Components
///	//Finds and sets up attached Input component
void UCannonController::SetupInputComponent()
{
	///Finds the InputComponent of the owner of this function
	InputComponent = GetOwner()->FindComponentByClass<UInputComponent>();
	///If an InputComponent is found then action events are setup
	if (InputComponent)
	{
		///Input for E key
		InputComponent->BindAction("InteractUp", IE_Pressed, this, &UCannonController::InteractUp);
		///Input for Q key
		InputComponent->BindAction("InteractDown", IE_Pressed, this, &UCannonController::InteractDown);
	}
	///If no InputComponent is found then error is logged
	else
	{
		UE_LOG(LogTemp, Error, TEXT("Cannot find input component on %s"), *(GetOwner()->GetName()))
	}
}

///Calls ray-cast and interacts with object in reach when E is pressed
void UCannonController::InteractUp()
{
	///Logs when key pressed
	UE_LOG(LogTemp, Warning, TEXT("InteractUp Pressed"));

	///Takes output of other function and places in container
	auto HitResult = GetFirstCannonControlInReach();
	///Uses container to determine interacted component
	auto ComponentToInteract = HitResult.GetComponent();
	///Uses container to determine the owning Actor of the hit result
	auto ActorHit = HitResult.GetActor();
	///Uses container to determine the component that retruns a hit result
	auto ComponentHit = HitResult.GetComponent();

	///If there is a HitResult on an actor then the operations are carried out
	if (ComponentHit)
	{
		auto HitResultStr = HitResult.ToString();
		UE_LOG(LogTemp, Warning, TEXT("Detected: %s"), *HitResultStr);
		
		OnInteractUp.Broadcast();
		
	}
}

///Calls ray-cast and interacts with object in reach when Q is pressed
void UCannonController::InteractDown()
{
	///Logs when key pressed
	UE_LOG(LogTemp, Warning, TEXT("InteractDown Pressed"));

	///Uses container to determine interacted component
	auto HitResult = GetFirstCannonControlInReach();
	///Uses container to determine interacted component
	auto ComponentToInteract = HitResult.GetComponent();
	///Uses container to determine the owning Actor of the hit result
	auto ActorHit = HitResult.GetActor();
	///Uses container to determine the component that retruns a hit result
	auto ComponentHit = HitResult.GetComponent();

	///If there is a HitResult on an actor then the operations are carried out
	if (ComponentHit)
	{
		auto HitResultStr = HitResult.ToString();
		UE_LOG(LogTemp, Warning, TEXT("Detected: %s"), *HitResultStr);

		OnInteractDown.Broadcast();

	}
}
