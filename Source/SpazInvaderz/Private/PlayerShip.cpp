// Fill out your copyright notice in the Description page of Project Settings.


#include "PlayerShip.h"
#include "GameFramework/PlayerInput.h"
#include "Components/InputComponent.h"
#include "bullet.h"
#include "Kismet/GameplayStatics.h"
#include "Engine/World.h"
#include "Components/BoxComponent.h"
#include "Camera/CameraActor.h"
#include "Engine/Engine.h"


// Sets default values
APlayerShip::APlayerShip()
{
 	// Set this pawn to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	PlayerMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("PlayerMesh"));
	SetRootComponent(PlayerMesh);

	//SpringArm = CreateDefaultSubobject<USpringArmComponent>(TEXT("SpringArmComp"));
	//SpringArm->bDoCollisionTest = false;
	//SpringArm->CameraLagSpeed = 5.f;
	//SpringArm->SetupAttachment(PlayerMesh);
	//SpringArm->SetRelativeRotation(FRotator(-45.f, 0.f, 0.f));

	Camera = CreateDefaultSubobject<UCameraComponent>(TEXT("Camera"));
	Camera->bUsePawnControlRotation = false;
	//Camera->SetupAttachment(SpringArm, USpringArmComponent::SocketName);

	
}

static void InitializeDefaultPawnInputBinding()
{
	static bool bindingsAdded = false;
	if (bindingsAdded == false)
	{
		bindingsAdded = true;


		UPlayerInput::AddEngineDefinedAxisMapping(FInputAxisKeyMapping("MoveX", EKeys::W, 1.f));
		UPlayerInput::AddEngineDefinedAxisMapping(FInputAxisKeyMapping("MoveX", EKeys::S, -1.f));

		UPlayerInput::AddEngineDefinedAxisMapping(FInputAxisKeyMapping("MoveY", EKeys::D, 1.f));
		UPlayerInput::AddEngineDefinedAxisMapping(FInputAxisKeyMapping("MoveY", EKeys::A, -1.f));

		UPlayerInput::AddEngineDefinedActionMapping(FInputActionKeyMapping("Shoot", EKeys::SpaceBar));
		UPlayerInput::AddEngineDefinedActionMapping(FInputActionKeyMapping("Reload", EKeys::R));
	}
}

// Called when the game starts or when spawned
void APlayerShip::BeginPlay()
{
	Super::BeginPlay();
	
	// Fixed camera position
	Camera->SetRelativeLocation(FVector(0.0f, 0.0f, 1000.0f));
	Camera->SetRelativeRotation(FRotator(-45.f, 0.0f, 0.0f));

	InitLocation = PlayerMesh->GetComponentLocation();
	
}

// Called every frame
void APlayerShip::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	InContact = false;
	PlayerMesh->AddRelativeLocation(FVector(XValue, YValue, 0.f) * PlayerSpeed);

}

// Called to bind functionality to input
void APlayerShip::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

	InitializeDefaultPawnInputBinding();
	PlayerInputComponent->BindAxis("MoveX", this, &APlayerShip::MoveXAxis);
	PlayerInputComponent->BindAxis("MoveY", this, &APlayerShip::MoveYAxis);
	PlayerInputComponent->BindAction("Shoot", EInputEvent::IE_Pressed, this, &APlayerShip::Shooting);
	PlayerInputComponent->BindAction("Reload", EInputEvent::IE_Pressed, this, &APlayerShip::Reload);

}

void APlayerShip::ResetLocation() const
{

}

void APlayerShip::Shooting()
{
	if (BulletAmount > 0)
	{
		BulletAmount--;
		GEngine->AddOnScreenDebugMessage(-1, 12.f, FColor::White, FString::Printf(TEXT("Ammo :  %d "), BulletAmount));

		UWorld* World = GetWorld();
		if (World)
		{
			FVector Location = GetActorLocation();
			// 150cm ahead of actor the bullet spawns from
			World->SpawnActor<AActor>(ActorToSpawn, Location + FVector(150.f, 0.f, 0.f), GetActorRotation());
			UGameplayStatics::PlaySound2D(World, ShootingSound, 1.f, 1.f, 0.f, 0);
		}

		if (BulletAmount == 0)
		{
			GEngine->AddOnScreenDebugMessage(-1, 12.f, FColor::Red, FString::Printf(TEXT("No ammo Reload %d "), BulletAmount));
		}
	}
	UE_LOG(LogTemp, Warning, TEXT("Shooting"));
}

void APlayerShip::Reload()
{
	BulletAmount = 30;
	UWorld* NewWorld = GetWorld();
	UGameplayStatics::PlaySound2D(NewWorld, ReloadSound, 1.f, 1.f, 0.f, 0);
	GEngine->AddOnScreenDebugMessage(-1, 12.f, FColor::Green, FString::Printf(TEXT("Reloaded"), BulletAmount));
}


void APlayerShip::MoveXAxis(float Value)
{
	XValue = Value;
}

void APlayerShip::MoveYAxis(float Value)
{
	YValue = Value;
}

void APlayerShip::Dash()
{
}

