// Fill out your copyright notice in the Description page of Project Settings.


#include "BaseGameAgent.h"

ABaseGameAgent::ABaseGameAgent()
{
}

void ABaseGameAgent::BeginPlay()
{
	Super::BeginPlay();
}

void ABaseGameAgent::ChangeWeaponType(TSubclassOf<ABaseWeapon> NewWeaponType)
{
}

FTransform ABaseGameAgent::GetWeaponSpawnTransform()
{
	return FTransform();
}

void ABaseGameAgent::SpawnDefaultWeapon()
{
}

void ABaseGameAgent::StartFire()
{
}

void ABaseGameAgent::StopFire()
{
}

void ABaseGameAgent::TakeDamage(float Damage)
{
}

bool ABaseGameAgent::IsAlive()
{
	return false;
}

void ABaseGameAgent::Died()
{
}

void ABaseGameAgent::PlayHitEffects()
{
}

void ABaseGameAgent::CleanUp()
{
}

void ABaseGameAgent::ApplyAgentInfo(FSAgentInfoCPP NewAgentInfo)
{
}

void ABaseGameAgent::AimAt(FVector Target)
{
}

void ABaseGameAgent::PlayDeathEffects()
{
}

void ABaseGameAgent::CheckForOutOfBounds()
{
}