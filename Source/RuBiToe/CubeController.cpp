// Fill out your copyright notice in the Description page of Project Settings.


#include "CubeController.h"
#include "CubeScript.h"

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
}


//TODO allow user to change the value a block

// Called every frame
void UCubeController::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);
	// ...
}

bool UCubeController::CheckForWin()
{
	for(int i = 0; i < Rows.Num(); i++)
	{
		return CheckAcross(i);
	}
	return false;
}

bool UCubeController::CheckAcross(int i)
{
	if (
		Rows[i].Cubes[0]->FindComponentByClass<UCubeScript>()->GetValue() != ECubeState::ECS_Empty &&
		Rows[i].Cubes[0]->FindComponentByClass<UCubeScript>()->GetValue() == Rows[i].Cubes[1]->FindComponentByClass<UCubeScript>()->GetValue() &&
		Rows[i].Cubes[1]->FindComponentByClass<UCubeScript>()->GetValue() == Rows[i].Cubes[2]->FindComponentByClass<UCubeScript>()->GetValue()
		)
	{
		return true;
	}

	return false;
}
