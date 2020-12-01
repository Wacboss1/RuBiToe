// Fill out your copyright notice in the Description page of Project Settings.


#include "CubeControllerPlus.h"

// Sets default values for this component's properties
UCubeControllerPlus::UCubeControllerPlus()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	// ...
}


// Called when the game starts
void UCubeControllerPlus::BeginPlay()
{
	Super::BeginPlay();
	FOutputDeviceNull ar;
	this->GetOwner()->CallFunctionByNameWithArguments(TEXT("TestMethod"), ar, NULL, true);
	this->GetOwner()->CallFunctionByNameWithArguments(TEXT("TestMethod"), ar, NULL, true);
}


// Called every frame
void UCubeControllerPlus::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);
}

