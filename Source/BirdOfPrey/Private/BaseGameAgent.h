// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Pawn.h"
#include "Components/SkeletalMeshComponent.h"
#include "Components/CapsuleComponent.h"
#include "Components/SceneComponent.h"
#include "Particles/ParticleSystem.h"
#include "Sound/SoundBase.h"
#include "Engine/EngineTypes.h"
#include "AgentInfo.h"
#include "BaseWeapon.h"
#include "BaseGameAgent.generated.h"

UCLASS()
class BIRDOFPREY_API ABaseGameAgent : public APawn
{
	GENERATED_BODY()

public:
	ABaseGameAgent();

protected:
	virtual void BeginPlay() override;

public:

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "BirdOfPrey")
	USkeletalMeshComponent* SkeletalMesh;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "BirdOfPrey")
	UCapsuleComponent* Capsule;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "BirdOfPrey")
	USceneComponent* WeaponSpawnOffset;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "BirdOfPrey")
	UParticleSystem* DeathParticleEffect;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "BirdOfPrey")
	USoundBase* DeathSoundCue;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "BirdOfPrey")
	USoundBase* HitSoundCue;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "BirdOfPrey")
	UParticleSystem* HitParticleEffect;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "BirdOfPrey")
	float MoveSpeed;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "BirdOfPrey")
	ABaseWeapon* Weapon;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "BirdOfPrey")
	TSubclassOf<ABaseWeapon> DefaultWeaponType;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "BirdOfPrey")
	float Health;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "BirdOfPrey")
	FSAgentInfoCPP AgentInfo;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "BirdOfPrey")
	float Points;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "BirdOfPrey")
	bool bCheckForOutOfBounds;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "BirdOfPrey")
	float OutOfBoundsCheckTolerance;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "BirdOfPrey")
	FName WeaponSocketName;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "BirdOfPrey")
	EAttachmentRule WeaponAttachRule;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "BirdOfPrey")
	FVector TargetLocation;

	UFUNCTION(BlueprintCallable, Category = "BirdOfPrey")
	virtual void ChangeWeaponType(TSubclassOf<ABaseWeapon> NewWeaponType);

	UFUNCTION(BlueprintCallable, Category = "BirdOfPrey")
	virtual FTransform GetWeaponSpawnTransform();

	UFUNCTION(BlueprintCallable, Category = "BirdOfPrey")
	virtual void SpawnDefaultWeapon();

	UFUNCTION(BlueprintCallable, Category = "BirdOfPrey")
	virtual void StartFire();

	UFUNCTION(BlueprintCallable, Category = "BirdOfPrey")
	virtual void StopFire();

	virtual void TakeDamage(float Damage);

	UFUNCTION(BlueprintCallable, Category = "BirdOfPrey")
	virtual bool IsAlive();

	virtual void Died();

	UFUNCTION(BlueprintCallable, Category = "BirdOfPrey")
	virtual void PlayHitEffects();

	UFUNCTION(BlueprintCallable, Category = "BirdOfPrey")
	virtual void CleanUp();

	virtual void ApplyAgentInfo(FSAgentInfoCPP NewAgentInfo);

	UFUNCTION(BlueprintCallable, Category = "BirdOfPrey")
	virtual void AimAt(FVector Target);

	UFUNCTION(BlueprintCallable, Category = "BirdOfPrey")
	virtual void PlayDeathEffects();

	UFUNCTION(BlueprintCallable, Category = "BirdOfPrey")
	virtual void CheckForOutOfBounds();
};