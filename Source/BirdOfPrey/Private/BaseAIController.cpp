// Fill out your copyright notice in the Description page of Project Settings.

#include "BaseAIController.h"

ABaseAIController::ABaseAIController()
{
    PrimaryActorTick.bCanEverTick = true;
}

void ABaseAIController::OnPossess(APawn* InPawn)
{
    Super::OnPossess(InPawn);
}

void ABaseAIController::Tick(float DeltaTime)
{
    Super::Tick(DeltaTime);
}

void ABaseAIController::SelectTarget()
{
}

void ABaseAIController::AimAt()
{
}

void ABaseAIController::CheckFire()
{
}

void ABaseAIController::UpdateAim()
{
}

bool ABaseAIController::ShouldStartFire()
{
    return false;
}

bool ABaseAIController::ShouldStopFire()
{
    return false;
}

void ABaseAIController::StartFire()
{
}

void ABaseAIController::StopFire()
{
}

bool ABaseAIController::ShouldUpdateAim()
{
    return false;
}