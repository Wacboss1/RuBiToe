// Fill out your copyright notice in the Description page of Project Settings.


#include "CubeController.h"

//Prototypes


//Data
enum sideName {
	front,
	right,
	left,
	back,
	top,
	bottom
};

typedef struct CubeFace {
	sideName name;
	int values[3][3];
} side;

//Class variables
side sides[6];

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
	SetupSides();
}

void UCubeController::SetupSides()
{
	for (int i = 1; i <= 6; i++)
	{
		sides[i].name = static_cast<sideName>(i);
		for (int j = 0; j < 3; j++)
		{
			for (int k = 0; k < 3; k++)
			{
				sides[i-1].values[j][k] = 0;
			}
		}
	}
}

//TODO allow user to change the value a block

// Called every frame
void UCubeController::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	// ...
}

void UCubeController::ChangeStatus()
{

}

