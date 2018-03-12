// Fill out your copyright notice in the Description page of Project Settings.

#include "RaiseStairs.h"
#include "GameFramework/Actor.h"
#include "Engine.h"


// Sets default values for this component's properties
URaiseStairs::URaiseStairs()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	// ...
}


// Called when the game starts
void URaiseStairs::BeginPlay()
{
	Super::BeginPlay();

	//Get owner 
	Owner = GetOwner();

	//Check for pressure plate and log error if not found
	if (!PressurePlate) {
		UE_LOG(LogTemp, Error, TEXT("Cannot find pressure plate on %s"), *(GetOwner()->GetName()));
	}
}


// Called every frame
void URaiseStairs::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	//Check the trigger volume for the mass of overlapping actors every frame
	/// TODO create Raising stairs BP
	/* 
	if (GetTotalMassOfActorsOnPlate() > StairsKeyWeight)
	{
		OnOpen.Broadcast();
	}
	else
	{
		OnClose.Broadcast();
	}
	*/
}

float URaiseStairs::GetTotalMassOfActorsOnPlate()
{
	//Safety
	float TotalMass = 0.0f;
	if (!PressurePlate) { return TotalMass; }

	//Find all actors overlapping on plate:
	//Declare array of actors
	TArray<AActor*> OverlappingActors;
	//Find overlapping actors and place them in the array
	PressurePlate->GetOverlappingActors(OverlappingActors);
	
	//Use a for loop to iterate through each Actor in the array
	///Could be: for(auto& Actor : OverlappingActors). Adding const is added as a safety measure so the Actor cannot change
	for (const auto* Actor : OverlappingActors) 
	{
		//Add up the mass values of each actor as we iterate through the array
		TotalMass += Actor->FindComponentByClass<UPrimitiveComponent>()->GetMass();
	}

	return TotalMass;
}

