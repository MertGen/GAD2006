// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "ABaseGameAgent.h"
#include "ABaseStationaryEnemy.generated.h"

/**
 * 
 */
UCLASS()
class ASSIGMENTDENEME_API AABaseStationaryEnemy : public AABaseGameAgent
{
	GENERATED_BODY()
	
	virtual void Died_Implementation(AController* Killer) override;
};
