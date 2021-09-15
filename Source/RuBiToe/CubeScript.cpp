// Fill out your copyright notice in the Description page of Project Settings.


#include "CubeScript.h"

// Sets default values for this component's properties
UCubeScript::UCubeScript()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;
	faceValue = ' ';
	// ...
}


// Called when the game starts
void UCubeScript::BeginPlay()
{
	Super::BeginPlay();

	// ...
	
}


// Called every frame
void UCubeScript::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	// ...
}

void UCubeScript::SetValue(uint8 val)
{
	faceValue = val;
}

