// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "ABaseWeapon.h"
#include "ABaseProjectile.h"
#include "AProjectileWeapon.generated.h"

/**
 * 
 */
UCLASS()
class ASSIGMENTDENEME_API AAProjectileWeapon : public AABaseWeapon
{
	GENERATED_BODY()
	
public:

	virtual bool IsFiring() override;
	virtual void StartFire_Implementation() override;
	virtual void StopFire_Implementation() override;

	UFUNCTION(BlueprintCallable, Category = "BirdOfPrey")
	void SpawnProjectile(FTransform SpawnTransform, AABaseProjectile* ReturnValue);

	UFUNCTION(BlueprintCallable, BlueprintPure, Category = "BirdOfPrey")
	void GetProjectileSpawnTransform(int ShotNumber, FTransform & ReturnValue);

	UFUNCTION(BlueprintCallable, BlueprintNativeEvent, Category = "BirdOfPrey")
	void FireProjectile();

	UFUNCTION(BlueprintCallable, BlueprintPure, Category = "BirdOfPrey")
	void ReadyToFire(bool & ReturnValue);

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "BirdOfPrey")
	TSubclassOf<AABaseProjectile> ProjectileType;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "BirdOfPrey")
	float RefireTime = 0.5;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "BirdOfPrey")
	float LastFireTime;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "BirdOfPrey")
	int NumShots = 1;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "BirdOfPrey")
	bool bIsFiring;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "BirdOfPrey")
	float DesiredZ;
};
                                   