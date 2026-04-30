// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "AIController.h"
#include "BaseAIController.generated.h"

class ABaseGameAgent;
class ABasePlayerController;

UCLASS()
class BIRDOFPREY_API ABaseAIController : public AAIController
{
    GENERATED_BODY()

public:

    ABaseAIController();

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "BirdOfPrey")
    float LastFireTime;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "BirdOfPrey")
    bool bIsFiring;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "BirdOfPrey")
    float RefireDelay;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "BirdOfPrey")
    bool bShouldUpdateAim;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "BirdOfPrey")
    ABasePlayerController* Target;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "BirdOfPrey")
    ABaseGameAgent* ControlledAgent;

    virtual void OnPossess(APawn* InPawn) override;
    virtual void Tick(float DeltaTime) override;

    UFUNCTION(BlueprintCallable, Category = "BirdOfPrey")
    void SelectTarget();

    UFUNCTION(BlueprintCallable, Category = "BirdOfPrey")
    void AimAt();

    UFUNCTION(BlueprintCallable, Category = "BirdOfPrey")
    void CheckFire();

    UFUNCTION(BlueprintCallable, Category = "BirdOfPrey")
    void UpdateAim();

    UFUNCTION(BlueprintCallable, Category = "BirdOfPrey")
    bool ShouldStartFire();

    UFUNCTION(BlueprintCallable, Category = "BirdOfPrey")
    bool ShouldStopFire();

    UFUNCTION(BlueprintCallable, Category = "BirdOfPrey")
    void StartFire();

    UFUNCTION(BlueprintCallable, Category = "BirdOfPrey")
    void StopFire();

    UFUNCTION(BlueprintCallable, Category = "BirdOfPrey")
    bool ShouldUpdateAim();
};