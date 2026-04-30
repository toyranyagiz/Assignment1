// Fill out your copyright notice in the Description page of Project Settings.


#include "PlayerShip.h"

APlayerShip::APlayerShip()
{
    PrimaryActorTick.bCanEverTick = true;
}

void APlayerShip::BeginPlay()
{
    Super::BeginPlay();
}

void APlayerShip::Tick(float DeltaTime)
{
    Super::Tick(DeltaTime);
}

void APlayerShip::PossessedBy(AController* NewController)
{
    Super::PossessedBy(NewController);
}

// -------- FUNCTIONS --------

void APlayerShip::ClampToCameraBounds()
{
}

void APlayerShip::UpdateHoverPitch()
{
}

void APlayerShip::GetPlayerAgentInfo()
{
}

bool APlayerShip::ShouldSpawnAIController()
{
    return false;
}

bool APlayerShip::HasDiedRecently()
{
    return false;
}

float APlayerShip::GetShipConstantVelocity()
{
    return 0.f;
}

float APlayerShip::GetShipAxisAdjustment()
{
    return 0.f;
}

float APlayerShip::CalcOutOfBoundsAdjustment()
{
    return 0.f;
}

float APlayerShip::TakeDamage()
{
    return 0.f;
}

void APlayerShip::Died(AController* Killer)
{
}

void APlayerShip::Reset()
{
}
