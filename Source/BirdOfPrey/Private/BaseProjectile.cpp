// Fill out your copyright notice in the Description page of Project Settings.


#include "BaseProjectile.h"

ABaseProjectile::ABaseProjectile()
{
    PrimaryActorTick.bCanEverTick = true;
}

void ABaseProjectile::BeginPlay()
{
    Super::BeginPlay();
}

void ABaseProjectile::Tick(float DeltaTime)
{
    Super::Tick(DeltaTime);
}

void ABaseProjectile::InitialiseProjectile()
{
}

void ABaseProjectile::DealDamageTo()
{
}

void ABaseProjectile::OnHit()
{
}

int32 ABaseProjectile::GetInstigatorCollisionChannel()
{
    return 0;
}

void ABaseProjectile::CheckForGroundUnitTarget()
{
}

bool ABaseProjectile::ShouldCheckForGroundTarget()
{
    return false;
}

void ABaseProjectile::AdjustToTarget()
{
}

bool ABaseProjectile::IsEnemyProjectile()
{
    return false;
}

void ABaseProjectile::AdjustToDesiredZ()
{
}

void ABaseProjectile::CleanupAndDestroy()
{
}
