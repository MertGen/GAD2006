// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "ABaseGameAgent.h"
#include "GameFramework/FloatingPawnMovement.h"
#include "ABaseShip.generated.h"

/**
 * 
 */
UCLASS()
class ASSIGMENTDENEME_API AABaseShip : public AABaseGameAgent
{
	GENERATED_BODY()

public:

	virtual void ApplyAgentInfo_Implementation(FSAgentInfo NewAgentInfo) override;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "BirdOfPrey")
	UFloatingPawnMovement* FloatingPawnMovement;

};