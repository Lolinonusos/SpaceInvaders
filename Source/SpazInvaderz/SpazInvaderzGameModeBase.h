// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "PlayerShip.h"
#include "Alien.h"

#include "SpazInvaderzGameModeBase.generated.h"


/**
 * 
 */
UCLASS()
class SPAZINVADERZ_API ASpazInvaderzGameModeBase : public AGameModeBase
{
	GENERATED_BODY()

public:

	virtual void BeginPlay() override;

	ASpazInvaderzGameModeBase();

	virtual void Tick(float DeltaSeconds) override;

	UPROPERTY(EditAnywhere, BlueprintreadWrite, Category = "HUD Variables")
	int ArraySize = 0;

	UPROPERTY(EditAnywhere, BlueprintreadWrite, Category = "HUD Variables")
	bool bAllDead = false;

	UFUNCTION(BlueprintCallable)
	bool ReturnDead();

	UPROPERTY(EditAnywhere, Category = "Spawning")
	int WaveNumber;

private:

	UPROPERTY(EditAnywhere, Category = "Spawning")
	TSubclassOf<class AAlien> AlienBP;

	UPROPERTY(EditAnywhere, Category = "Spawning")
	float SpawnDelay = 2.0f;

	float EnemyTimer = 0.0f;

	float EnemyTurnTimer = 0.0f;

	int EnemyMoveDirection = 1;

	TArray<class AAlien*> EnemyArray;

	//UFUNCTION
	void EveryOneIsDead();

};
