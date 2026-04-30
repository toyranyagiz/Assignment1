// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "BaseWeapon.generated.h"

class UParticleSystem;
class USoundBase;

UCLASS()
class BIRDOFPREY_API ABaseWeapon : public AActor
{
    GENERATED_BODY()

public:

    ABaseWeapon();


    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "BirdOfPrey")
    UParticleSystem* FireParticleEffect;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "BirdOfPrey")
    USoundBase* FireSoundCue;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "BirdOfPrey")
    bool bRequiresAimForAI;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "BirdOfPrey")
    bool bIsAutomatic;


    UFUNCTION(BlueprintCallable, Category = "BirdOfPrey")
    void StartFire();

    UFUNCTION(BlueprintCallable, Category = "BirdOfPrey")
    void StopFire();

    UFUNCTION(BlueprintCallable, Category = "BirdOfPrey")
    void PlayFireEffects();

    UFUNCTION(BlueprintCallable, Category = "BirdOfPrey")
    FVector GetFireEffectSpawnTransform();

    UFUNCTION(BlueprintCallable, Category = "BirdOfPrey")
    bool HasFinishedFiring();

    UFUNCTION(BlueprintCallable, Category = "BirdOfPrey")
    bool IsFiring();
};
