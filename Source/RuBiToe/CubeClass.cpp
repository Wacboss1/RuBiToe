// Fill out your copyright notice in the Description page of Project Settings.


#include "CubeClass.h"

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

side* sides[6];

// Sets default values for this component's properties
UCubeClass::UCubeClass()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	// ...
}


// Called when the game starts
void UCubeClass::BeginPlay()
{
	Super::BeginPlay();
	//int i = front; i != bottom; i++
	SetupArray();
}

void SetupArray()
{
	for (int i = 0; i < 6; i++)
	{
		sides[i]->name = static_cast<sideName>(i);
		for (int j = 0; j < 3; j++)
		{
			for (int k = 0; k < 3; k++)
			{
				sides[i]->values[j][k] = 0;
			}
		}
	}
}

// Called every frame
void UCubeClass::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	// ...
}

