// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Runtime/Engine/Classes/Particles/ParticleSystemComponent.h"
#include "Bullet.generated.h"

UCLASS()
class SPAZINVADERZ_API ABullet : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ABullet();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

private:
	UPROPERTY(EditAnywhere, Category = Bullet)
	float Speed = 1500.f;

	UPROPERTY(EditAnywhere, Category = Bullet)
	float TimeToDespawn = 5.f;

	UPROPERTY(EditAnywhere, Category = Bullet)
	float TimeLived = 0.f;

	UPROPERTY(EditAnywhere, Category = Bullet)
	UParticleSystem* BulletFire = nullptr;

	UPROPERTY(EditAnywhere, Category = Bullet)
	USoundBase* BulletHit = nullptr;

	UPROPERTY(EditAnywhere, Category = Bullet)
		UStaticMeshComponent* BulletMesh = nullptr;

	// We will use this one later
	UFUNCTION()
		void OnOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComponent,
			int32 OtherbodyIndex, bool bFromSweep, const FHitResult& SweepResult);
};
