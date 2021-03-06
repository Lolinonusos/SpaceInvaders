// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Alien.generated.h"

UCLASS()
class SPAZINVADERZ_API AAlien : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AAlien();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;


	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Enemy")
	UStaticMeshComponent* EnemyMesh = nullptr;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Enemy")
	USoundBase* EnemyMove = nullptr;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Enemy")
	USoundBase* EnemyHit = nullptr;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Enemy")
	float SpeedLevel;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Enemy")
	UParticleSystem* EnemyDeath;

	FVector MoveDirection = FVector(1.f, 0.f, 0.f);

	bool DeleteThisEnemy = false;

	void Hit();
private:
	UPROPERTY(EditAnywhere)
		float Speed = -50.f;

	UPROPERTY(EditAnywhere)
	float DestroyPlacement = -2000.f;

	int EnemyHealth;

};
