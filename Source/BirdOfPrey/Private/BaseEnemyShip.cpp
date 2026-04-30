// Fill out your copyright notice in the Description page of Project Settings.


#include "BaseEnemyShip.h"
#include "Kismet/GameplayStatics.h"

ABaseEnemyShip::ABaseEnemyShip()
{
    PrimaryActorTick.bCanEverTick = true;
}

void ABaseEnemyShip::BeginPlay()
{
    Super::BeginPlay();
}

void ABaseEnemyShip::Tick(float DeltaTime)
{
    Super::Tick(DeltaTime);
}


void ABaseEnemyShip::Move()
{
}

void ABaseEnemyShip::Died(AController* Killer)
{
}

void ABaseEnemyShip::Reset()
{
}

