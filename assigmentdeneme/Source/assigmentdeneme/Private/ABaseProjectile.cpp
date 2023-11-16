// Fill out your copyright notice in the Description page of Project Settings.


#include "ABaseProjectile.h"

// Sets default values
AABaseProjectile::AABaseProjectile()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AABaseProjectile::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AABaseProjectile::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void AABaseProjectile::CleanUpAndDestroy_Implementation()
{

}

void AABaseProjectile::InitaliseProjectile(FVector Direction, float Speed)
{

}

void AABaseProjectile::DealDamageTo(AActor* Damaging, float Damage)
{

}

void AABaseProjectile::OnHit(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor)
{

}

void AABaseProjectile::CheckForGroundUnitTarget()
{

}

void AABaseProjectile::ShouldCheckForGroundTarget(bool& ReturnValue)
{

}

void AABaseProjectile::AdjustToTarget()
{

}

void AABaseProjectile::IsEnemyProjectile(bool& ReturnValue)
{

}

void AABaseProjectile::AdjustToDesiredZ()
{

}
