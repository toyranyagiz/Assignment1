// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "BaseEnemyShip.h"
#include "BaseStationaryEnemy.generated.h"

class AController;

UCLASS()
class BIRDOFPREY_API ABaseStationaryEnemy : public ABaseEnemyShip
{
    GENERATED_BODY()

public:

    virtual void Died(AController* Killer) override;
};
