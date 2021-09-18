// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "CubeScript.generated.h"

UENUM()
enum ECubeState
{
	ECS_Empty UMETA(DisplayName = "Empty"),
	ECS_Player1 UMETA(DisplayName = "Player1"),
	ECS_Player2 UMETA(DisplayName = "Player2"),
};

UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class RUBITOE_API UCubeScript : public UActorComponent
{
	GENERATED_BODY()
public:	
	// Sets default values for this component's properties
	UCubeScript();
	UPROPERTY(EditAnywhere)
	TEnumAsByte<ECubeState> faceValue;
protected:
	// Called when the game starts
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;
	UFUNCTION(BlueprintCallable, Category="Basic Cube")
	void SetValue(TEnumAsByte<ECubeState> Val);
	UFUNCTION(BlueprintCallable, Category="Basic Cube")
	ECubeState GetValue();
};