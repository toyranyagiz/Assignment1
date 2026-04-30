// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "BasePowerup.generated.h"

class APlayerShip;
class USoundBase;
class UParticleSystem;
class UStaticMeshComponent;

UCLASS()
class BIRDOFPREY_API ABasePowerup : public AActor
{
    GENERATED_BODY()

public:

    ABasePowerup();


    UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "BirdOfPrey")
    UStaticMeshComponent* Mesh;


    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "BirdOfPrey")
    USoundBase* PickUpSoundCue;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "BirdOfPrey")
    UParticleSystem* PickUpParticleSystem;


    virtual void BeginPlay() override;


    UFUNCTION(BlueprintCallable, Category = "BirdOfPrey")
    void Apply(APlayerShip* PlayerShip);

    UFUNCTION(BlueprintCallable, Category = "BirdOfPrey")
    void PlayEffects();
};
