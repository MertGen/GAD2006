#pragma once

#include "CoreMinimal.h"
#include "UBaseAIController.h"
#include "ABaseShip.h"
#include "ABaseEnemyShip.generated.h"

/**

*/
UCLASS()
class AABaseEnemyShip : public AABaseShip
{
    GENERATED_BODY()

    UFUNCTION(BlueprintCallable, Category = "BirdOfPrey")
    void Move();

    virtual void Died_Implementation(AController* Killer) override;

public:

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "BirdOfPrey")
    AUBaseAIController* DefaultSceneRoot;

};
