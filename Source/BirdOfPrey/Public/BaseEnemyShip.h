// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "BaseShip.h"
#include "BaseEnemyShip.generated.h"

class AController;

UCLASS()
class BIRDOFPREY_API ABaseEnemyShip : public ABaseShip
{
    GENERATED_BODY()

public:

    ABaseEnemyShip();

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "BirdOfPrey")
    AController* ShipAIController;

    virtual void BeginPlay() override;
    virtual void Tick(float DeltaTime) override;

    UFUNCTION(BlueprintCallable, Category = "BirdOfPrey")
    void Move();

    UFUNCTION(BlueprintCallable, Category = "BirdOfPrey")
    virtual void Died(AController* Killer);

    virtual void Reset() override;
};