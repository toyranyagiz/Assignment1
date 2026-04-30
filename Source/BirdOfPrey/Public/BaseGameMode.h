// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameMode.h"
#include "Engine/DataTable.h"
#include "TimerManager.h"
#include "BaseGameMode.generated.h"

UCLASS()
class BIRDOFPREY_API ABaseGameMode : public AGameMode
{
    GENERATED_BODY()

public:

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "BirdOfPrey")
    float WorldScrollSpeed;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "BirdOfPrey")
    FVector2D MaxRelativePlayerOffset;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "BirdOfPrey")
    AActor* WorldCameraActor;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "BirdOfPrey")
    UDataTable* PlayerAgentInfoTable;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "BirdOfPrey")
    float RespawnDelay;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "BirdOfPrey")
    float SpawnOffset;

    UPROPERTY(BlueprintReadWrite, Category = "BirdOfPrey")
    FTimerHandle StationarySpawnTimer;

    UPROPERTY(BlueprintReadWrite, Category = "BirdOfPrey")
    FTimerHandle ShipSpawnTimer;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "BirdOfPrey")
    TArray<TSubclassOf<AActor>> PowerUpList;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "BirdOfPrey")
    float PickUpSpawnPercent;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "BirdOfPrey")
    bool IsGameOverScreen;

    virtual void BeginPlay() override;

    UFUNCTION(BlueprintCallable, Category = "BirdOfPrey")
    void StartGame();

    UFUNCTION(BlueprintCallable, Category = "BirdOfPrey")
    void EndGame();

    UFUNCTION(BlueprintCallable, Category = "BirdOfPrey")
    void ResetGame();

    UFUNCTION(BlueprintCallable, Category = "BirdOfPrey")
    void RespawnPlayer();

    UFUNCTION(BlueprintCallable, Category = "BirdOfPrey")
    void SpawnEnemyFrom();

    UFUNCTION(BlueprintCallable, Category = "BirdOfPrey")
    void TrySpawnPowerUp();

    UFUNCTION(BlueprintCallable, Category = "BirdOfPrey")
    float GetDistanceTravelled();

    UFUNCTION(BlueprintCallable, Category = "BirdOfPrey")
    float GetWorldScrollVelocity();

    UFUNCTION(BlueprintCallable, Category = "BirdOfPrey")
    AActor* GetWorldCameraActor();

    UFUNCTION(BlueprintCallable, Category = "BirdOfPrey")
    void OnPlayerDied();

    UFUNCTION(BlueprintCallable, Category = "BirdOfPrey")
    void OnEnemyDied();
};