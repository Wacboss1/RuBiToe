// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "CubeClass.generated.h"


UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class RUBITOE_API UCubeClass : public UActorComponent
{
	GENERATED_BODY()
public:	
	// Sets default values for this component's properties
	UCubeClass();

protected:
	// Called when the game starts
	virtual void BeginPlay() override;
	void SetupSides();

public:	
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;
		
};
