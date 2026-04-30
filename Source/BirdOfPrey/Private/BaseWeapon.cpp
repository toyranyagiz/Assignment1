// Fill out your copyright notice in the Description page of Project Settings.


#include "BaseWeapon.h"

ABaseWeapon::ABaseWeapon()
{
    PrimaryActorTick.bCanEverTick = false;
}


void ABaseWeapon::StartFire()
{
}

void ABaseWeapon::StopFire()
{
}

void ABaseWeapon::PlayFireEffects()
{
}

FVector ABaseWeapon::GetFireEffectSpawnTransform()
{
    return FVector::ZeroVector;
}

bool ABaseWeapon::HasFinishedFiring()
{
    return true;
}

bool ABaseWeapon::IsFiring()
{
    return false;
}

