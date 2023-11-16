// Fill out your copyright notice in the Description page of Project Settings.


#include "ABaseWeapon.h"

// Sets default values
AABaseWeapon::AABaseWeapon()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AABaseWeapon::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AABaseWeapon::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}


void AABaseWeapon::StartFire_Implementation() 
{

}

void AABaseWeapon::StopFire_Implementation()
{

}

void AABaseWeapon::PlayFireEffects()
{

}

void AABaseWeapon::GetFireEffectSpawnTransform(FTransform & ReturnValue)
{

}

void AABaseWeapon::HasFinishedFiring(bool & ReturnValue)
{

}

bool AABaseWeapon::IsFiring()
{
	return false;
}