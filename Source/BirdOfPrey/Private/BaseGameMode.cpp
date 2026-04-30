#include "BaseGameMode.h"

void ABaseGameMode::BeginPlay()
{
    Super::BeginPlay();
}

void ABaseGameMode::StartGame()
{
}

void ABaseGameMode::EndGame()
{
}

void ABaseGameMode::ResetGame()
{
}

void ABaseGameMode::RespawnPlayer()
{
}

void ABaseGameMode::SpawnEnemyFrom()
{
}

void ABaseGameMode::TrySpawnPowerUp()
{
}

float ABaseGameMode::GetDistanceTravelled()
{
    return 0.0f;
}

float ABaseGameMode::GetWorldScrollVelocity()
{
    return 0.0f;
}

AActor* ABaseGameMode::GetWorldCameraActor()
{
    return nullptr;
}

void ABaseGameMode::OnPlayerDied()
{
}

void ABaseGameMode::OnEnemyDied()
{
}