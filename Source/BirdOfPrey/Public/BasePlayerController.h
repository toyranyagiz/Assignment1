// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerController.h"
#include "BasePlayerController.generated.h"

UCLASS()
class BIRDOFPREY_API ABasePlayerController : public APlayerController
{
    GENERATED_BODY()

public:

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "BirdOfPrey")
    bool bDiedWhileFiring;

    virtual void BeginPlay() override;

    UFUNCTION(BlueprintCallable, Category = "BirdOfPrey")
    void CalcScreenDimensions();

    UFUNCTION(BlueprintCallable, Category = "BirdOfPrey")
    void OnPlayerDeath();

    UFUNCTION(BlueprintCallable, Category = "BirdOfPrey")
    void Reset();

    UFUNCTION(BlueprintCallable, Category = "BirdOfPrey")
    void PauseMenuPressed();
};