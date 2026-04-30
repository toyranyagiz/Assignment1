// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerState.h"
#include "BasePlayerState.generated.h" 

UCLASS()
class BIRDOFPREY_API ABasePlayerState : public APlayerState
{
    GENERATED_BODY()

public:

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "BirdOfPrey")
    float PlayerScore;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "BirdOfPrey")
    int32 RemainingLives;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "BirdOfPrey")
    float TimeOfLastDeath;

    UFUNCTION(BlueprintCallable, Category = "BirdOfPrey")
    void Reset();

    UFUNCTION(BlueprintCallable, Category = "BirdOfPrey")
    void AddScore(float ScoreToAdd);

    UFUNCTION(BlueprintCallable, Category = "BirdOfPrey")
    void ConsumeLife();

    UFUNCTION(BlueprintCallable, Category = "BirdOfPrey")
    bool HasRemainingLives();
};