// Fill out your copyright notice in the Description page of Project Settings.


#include "ProjectileWeapon.h"

AProjectileWeapon::AProjectileWeapon()
{
    PrimaryActorTick.bCanEverTick = true;
}

void AProjectileWeapon::Tick(float DeltaTime)
{
    Super::Tick(DeltaTime);

    if (bIsFiring && ReadyToFire())
    {
        FireProjectile();
    }
}

// -------- FUNCTIONS --------

void AProjectileWeapon::StartFire()
{
    Super::StartFire();
    bIsFiring = true;

    if (ReadyToFire())
    {
        FireProjectile();
    }
}

void AProjectileWeapon::StopFire()
{
    Super::StopFire();
    bIsFiring = false;
}

void AProjectileWeapon::FireProjectile()
{
    for (int32 i = 0; i < NumShots; i++)
    {
        SpawnProjectile();
    }

    LastFireTime = GetWorld()->GetTimeSeconds();

    PlayFireEffects();
}

void AProjectileWeapon::SpawnProjectile()
{
}

FVector AProjectileWeapon::GetProjectileSpawnTransform(int32 ShotIndex)
{
    return FVector::ZeroVector;
}

bool AProjectileWeapon::ReadyToFire()
{
    float CurrentTime = GetWorld()->GetTimeSeconds();
    return (CurrentTime - LastFireTime) >= RefireTime;
}

bool AProjectileWeapon::IsFiring()
{
    return bIsFiring;
}