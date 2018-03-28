// Fill out your copyright notice in the Description page of Project Settings.

#include "CannonYawControl.h"

UCannonYawControl::UCannonYawControl()
{
	PrimaryComponentTick.bCanEverTick = true;

}

void UCannonYawControl::BeginPlay()
{
	Super::BeginPlay();

}

void UCannonYawControl::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

}

