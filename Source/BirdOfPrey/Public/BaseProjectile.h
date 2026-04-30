// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "BaseProjectile.generated.h"

class UProjectileMovementComponent;
class UCapsuleComponent;
class UStaticMeshComponent;
class UParticleSystem;
class USoundBase;

UCLASS()
class BIRDOFPREY_API ABaseProjectile : public AActor
{
    GENERATED_BODY()

public:

    ABaseProjectile();

    UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "BirdOfPrey")
    UProjectileMovementComponent* ProjectileMovement;

    UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "BirdOfPrey")
    UCapsuleComponent* Capsule;

    UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "BirdOfPrey")
    UStaticMeshComponent* Mesh;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "BirdOfPrey")
    float ProjectileSpeed;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "BirdOfPrey")
    float Damage;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "BirdOfPrey")
    UParticleSystem* DetonationEmitter;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "BirdOfPrey")
    float GroundUnitCheckDistance;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "BirdOfPrey")
    float GroundUnitCheckAngle;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "BirdOfPrey")
    AActor* GroundTarget;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "BirdOfPrey")
    float DesiredZ;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "BirdOfPrey")
    USoundBase* ImpactSound;

    virtual void BeginPlay() override;
    virtual void Tick(float DeltaTime) override;

    UFUNCTION(BlueprintCallable, Category = "BirdOfPrey")
    void InitialiseProjectile();

    UFUNCTION(BlueprintCallable, Category = "BirdOfPrey")
    void DealDamageTo();

    UFUNCTION(BlueprintCallable, Category = "BirdOfPrey")
    void OnHit();

    UFUNCTION(BlueprintCallable, Category = "BirdOfPrey")
    int32 GetInstigatorCollisionChannel();

    UFUNCTION(BlueprintCallable, Category = "BirdOfPrey")
    void CheckForGroundUnitTarget();

    UFUNCTION(BlueprintCallable, Category = "BirdOfPrey")
    bool ShouldCheckForGroundTarget();

    UFUNCTION(BlueprintCallable, Category = "BirdOfPrey")
    void AdjustToTarget();

    UFUNCTION(BlueprintCallable, Category = "BirdOfPrey")
    bool IsEnemyProjectile();

    UFUNCTION(BlueprintCallable, Category = "BirdOfPrey")
    void AdjustToDesiredZ();

    UFUNCTION(BlueprintCallable, Category = "BirdOfPrey")
    void CleanupAndDestroy();
};