// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "BaseWeapon.h"
#include "ProjectileWeapon.generated.h"

class ABaseProjectile;

UCLASS()
class BIRDOFPREY_API AProjectileWeapon : public ABaseWeapon
{
    GENERATED_BODY()

public:

    AProjectileWeapon();

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "BirdOfPrey")
    TSubclassOf<ABaseProjectile> ProjectileType;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "BirdOfPrey")
    float RefireTime;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "BirdOfPrey")
    float LastFireTime;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "BirdOfPrey")
    int32 NumShots;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "BirdOfPrey")
    bool bIsFiring;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "BirdOfPrey")
    float DesiredZ;

    virtual void Tick(float DeltaTime) override;

    UFUNCTION(BlueprintCallable, Category = "BirdOfPrey")
    void SpawnProjectile();

    UFUNCTION(BlueprintCallable, Category = "BirdOfPrey")
    FVector GetProjectileSpawnTransform(int32 ShotIndex);

    UFUNCTION(BlueprintCallable, Category = "BirdOfPrey")
    bool ReadyToFire();

    bool IsFiring();
    void StartFire();
    void StopFire();

private:

    void FireProjectile();
};
