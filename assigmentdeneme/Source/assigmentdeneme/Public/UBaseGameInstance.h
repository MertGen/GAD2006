// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/GameInstance.h"
#include "FSAgentInfo.h"
#include "UBaseGameInstance.generated.h"

/**
 * 
 */

UCLASS()
class ASSIGMENTDENEME_API UUBaseGameInstance : public UGameInstance
{
	GENERATED_BODY()

public:

	UFUNCTION(BlueprintCallable, Category = "BirdOfPrey")
	void SetPlayerAgentInfoFor(int PlayerControllerID, FSAgentInfo AgentInfo);

	UFUNCTION(BlueprintCallable, Category = "BirdOfPrey")
	void GetPlayerAgentInfoFor(int PlayerControllerID, FSAgentInfo& ReturnValue, bool& Succes);

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "BirdOfPrey")
	TArray<FSAgentInfo> PlayerAgentInfo;
};
