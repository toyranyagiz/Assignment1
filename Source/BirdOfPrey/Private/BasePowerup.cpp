// Fill out your copyright notice in the Description page of Project Settings.


#include "BasePowerup.h"

ABasePowerup::ABasePowerup()
{
    PrimaryActorTick.bCanEverTick = false;
}

void ABasePowerup::BeginPlay()
{
    Super::BeginPlay();
}

void ABasePowerup::Apply(APlayerShip* PlayerShip)
{
}

void ABasePowerup::PlayEffects()
{
}

