// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Pawn.h"

//#include "Gameframework/SpringArmComponent.h"
#include "Components/StaticMeshComponent.h"
#include "Camera/CameraComponent.h"
#include <UObject/ConstructorHelpers.h>
#include "Components/TimelineComponent.h"

#include "PlayerShip.generated.h"

UCLASS()
class SPAZINVADERZ_API APlayerShip : public APawn
{
	GENERATED_BODY()

public:
	// Sets default values for this pawn's properties
	APlayerShip();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	// Called every frame
	virtual void Tick(float DeltaTime) override;
public:	

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = PlayerMesh)
	UStaticMeshComponent* PlayerMesh = nullptr;

	// HitBox
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Player")
	UShapeComponent* CollisionBox = nullptr;

	//UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = PlayerMesh)
	//USpringArmComponent* SpringArm = nullptr;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = PlayerMesh)
	UCameraComponent* Camera = nullptr;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = PlayerMesh)
	float PlayerSpeed = 10.f;


	// HUD time?
	// https://unrealcpp.com/health-bar-ui-hud/ looked at this
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Health")
	int HealthTotal;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Health")
	int PlayerHealth = 3;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Health")
	float HealthPercentage;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Health")
	float PreviousHealth;

	float GetHealth();

	UFUNCTION(Category = "Health")
	void UpdateHealth(float HealthChange);

	UFUNCTION(BluePrintCallable, Category = "Health")
	FText GetHealthIntText();

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Bullet)
	int BulletTotal = 30;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Bullet)
	int BulletCurrent = 30;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Bullet)
	float BulletPercent;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Bullet)
	float PreviousBullet;

	float GetBUllet();

	UFUNCTION(Category = Bullet)
	void UpdateBullet(float BulletChange);

	UFUNCTION(BluePrintCallable, Category = "Bullet")
	FText GetBulletIntText();


	// SFX Mode
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = PlayerMesh)
	USoundBase* ShootingSound = nullptr;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = PlayerMesh)
	USoundBase* ReloadSound = nullptr;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = PlayerMesh)
	USoundBase* DashSound = nullptr;

	// This line gives acces to other cpp classes
	UPROPERTY(EditAnywhere, meta = (AllowPrivateAccess = "true"))
	TSubclassOf<AActor> ActorToSpawn;


	void Reload();
	void Shooting();

	UFUNCTION(BlueprintCallable)
	void ResetLocation() const;
	bool InContact;



private:

	FVector InitLocation = FVector::ZeroVector;


	void MoveXAxis(float Value);
	void MoveYAxis(float Value);

	void Dash();
	bool bDash;
	float XValue = 0.f;
	float YValue = 0.f;
	float DashSpeed;
	float DashTimer;

	UFUNCTION()
	void OnOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComponent,
			int32 OtherbodyIndex, bool bFromSweep, const FHitResult& SweepResult);

};
