#pragma once

#include "CoreMinimal.h"
#include "UBasePlayerController.h"
#include "ABaseShip.h"
#include "APlayerShip.generated.h"

/**

*/
UCLASS()
class AAPlayerShip : public AABaseShip
{
    GENERATED_BODY()

public:

    UFUNCTION(BlueprintCallable, Category = "BirdOfPrey")
    void GetShipConstantVelocity(FVector& Direction, float& Speed);

    UFUNCTION(BlueprintCallable, Category = "BirdOfPrey")
    void ClampToCameraBounds();

    UFUNCTION(BlueprintCallable, Category = "BirdsOfPrey")
    void GetShipAxisAdjustment(float Dist, float Max, float& ReturnValue);

    UFUNCTION(BlueprintCallable, Category = "BirdOfPrey")
    void CalcOutofBoundsAdjustment();

    UFUNCTION(BlueprintCallable, Category = "BirdOfPrey")
    void GetPlayerAgentInfo();

    UFUNCTION(BlueprintCallable, Category = "BirdOfPrey")
    void ShouldSpawnAIController();

    UFUNCTION(BlueprintCallable, Category = "BirdOfPrey")
    void UpdateHoverPitch();

    UFUNCTION(BlueprintCallable, Category = "BirdOfPrey")
    void HasDiedRecently(bool& ReturnValue);

    virtual void Take_Damage(float Damage, float& ActualDamage) override;

    UPROPERTY(EditAnywhere, Category = "BirdOfPrey")
    AUBasePlayerController* BasePlayerController;

    UPROPERTY(EditAnywhere, Category = "BirdOfPrey")
    float InvulnerabilityTime;
};
