// Fill out your copyright notice in the Description page of Project Settings.


#include "CubeController.h"

// Sets default values for this component's properties
UCubeController::UCubeController()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	// ...
}


// Called when the game starts
void UCubeController::BeginPlay()
{
	Super::BeginPlay();
	//int i = front; i != bottom; i++
}


//TODO allow user to change the value a block

// Called every frame
void UCubeController::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	// ...
}

