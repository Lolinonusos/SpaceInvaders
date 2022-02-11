// Copyright Epic Games, Inc. All Rights Reserved.


#include "SpazInvaderzGameModeBase.h"
#include "Kismet/GameplayStatics.h"

ASpazInvaderzGameModeBase::ASpazInvaderzGameModeBase()
{
	PrimaryActorTick.bCanEverTick = true;

	bAllDead = false;
}

void ASpazInvaderzGameModeBase::BeginPlay()
{
	bAllDead = false;

	UWorld* World = GetWorld();

	// Spawns enemies
	if (World)
	{
		for (int i = 1; i < 5; i++)
		{
			for (int j = 1; j < 11; j++)
			{
				FVector Location = FVector((800.0f - i * 200), (-1000.0f + j * 200), 70.f);

				AAlien* tempAlien = World->SpawnActor<AAlien>(AlienBP, Location, FRotator::ZeroRotator);

				EnemyArray.Add(tempAlien);
				ArraySize++;
			}
		}
	UE_LOG(LogTemp, Error, TEXT("Enemy Array is: %d "), EnemyArray.Num());
	}
}

void ASpazInvaderzGameModeBase::Tick(float DeltaSeconds)
{
	Super::Tick(DeltaSeconds);

    EnemyTimer += DeltaSeconds;
    EnemyTurnTimer += DeltaSeconds;
    if (EnemyTurnTimer > 4.0f)
    {
        UE_LOG(LogTemp, Error, TEXT("Enemy Move Logic Running"));
        for (int i = 0; i < EnemyArray.Num(); i++)
        {
            if (EnemyArray[i]->DeleteThisEnemy) {
                EnemyArray[i]->Destroy();
                EnemyArray.RemoveAt(i);
                UE_LOG(LogTemp, Error, TEXT("Enemy down. Enemy Array is: %d "), EnemyArray.Num());
                ArraySize--;
            }

        }
        for (auto Enemy : EnemyArray) //for (int i = 0; i < EnemyArray.Num(); i++)
        {
            switch (EnemyMoveDirection) {
            case 1:
                Enemy->MoveDirection = FVector(1.0f, 0.f, 0.f);
                break;
            case 2:
                Enemy->MoveDirection = FVector(0.0f, 1.f, 0.f);
                break;
            case 3:
                Enemy->MoveDirection = FVector(1.0f, 0.f, 0.f);
                break;
            case 4:
                Enemy->MoveDirection = FVector(0.0f, -1.f, 0.f);
                break;
            default:
                UE_LOG(LogTemp, Error, TEXT("Enemy Move Logic not working!"));
                break;
            }
        }
        EnemyMoveDirection = ((EnemyMoveDirection) % 4) + 1;
        //EnemyMoveDirection = FMath::FloorToInt(FMath::FRandRange(1.f,4.f));
        EnemyTurnTimer = 0.f;
    }


}

bool ASpazInvaderzGameModeBase::ReturnDead()
{
	return false;
}
