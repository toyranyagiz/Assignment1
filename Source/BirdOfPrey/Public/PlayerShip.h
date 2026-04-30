// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "BaseShip.h"
#include "PlayerShip.generated.h"

class AController;
class UPointLightComponent;
class UAudioComponent;

UCLASS()
class BIRDOFPREY_API APlayerShip : public ABaseShip
{
    GENERATED_BODY()

public:

    APlayerShip();


    UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "BirdOfPrey")
    UPointLightComponent* PointLight;

    UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "BirdOfPrey")
    UAudioComponent* HoverAudio;


    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "BirdOfPrey")
    AController* BasePlayerController;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "BirdOfPrey")
    float InvulnerabilityTime;


    virtual void BeginPlay() override;
    virtual void Tick(float DeltaTime) override;

    virtual void PossessedBy(AController* NewController) override;


    UFUNCTION(BlueprintCallable, Category = "BirdOfPrey")
    void ClampToCameraBounds();

    UFUNCTION(BlueprintCallable, Category = "BirdOfPrey")
    void UpdateHoverPitch();

    UFUNCTION(BlueprintCallable, Category = "BirdOfPrey")
    void GetPlayerAgentInfo();

    UFUNCTION(BlueprintCallable, Category = "BirdOfPrey")
    bool ShouldSpawnAIController();

    UFUNCTION(BlueprintCallable, Category = "BirdOfPrey")
    bool HasDiedRecently();

    UFUNCTION(BlueprintCallable, Category = "BirdOfPrey")
    float GetShipConstantVelocity();

    UFUNCTION(BlueprintCallable, Category = "BirdOfPrey")
    float GetShipAxisAdjustment();

    UFUNCTION(BlueprintCallable, Category = "BirdOfPrey")
    float CalcOutOfBoundsAdjustment();

    UFUNCTION(BlueprintCallable, Category = "BirdOfPrey")
    float TakeDamage();

    UFUNCTION(BlueprintCallable, Category = "BirdOfPrey")
    virtual void Died(AController* Killer);

    virtual void Reset() override;
};