// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "CubeScript.h"
#include "CubeController.generated.h"


USTRUCT(BlueprintType)
struct FCubeRow
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Cube Row")
	TArray<AActor*> Cubes;
};

UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class RUBITOE_API UCubeController : public UActorComponent
{
	GENERATED_BODY()
public:	
	// Sets default values for this component's properties
	UCubeController();
	UPROPERTY(BlueprintReadWrite, Category = "Row")
	TArray<FCubeRow> Rows;

protected:
	// Called when the game starts
	virtual void BeginPlay() override;
public:	
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;
	bool CheckBackslash();
	bool CheckDown();
	UFUNCTION(BlueprintCallable, CallInEditor, Category = "Row")
	bool CheckForWin();
	bool CheckForwardSlash();
	bool CheckAllAcross();
};
