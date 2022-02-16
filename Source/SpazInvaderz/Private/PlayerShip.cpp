// Fill out your copyright notice in the Description page of Project Settings.


#include "PlayerShip.h"
#include "GameFramework/PlayerInput.h"
#include "Components/InputComponent.h"
#include "bullet.h"
#include "Alien.h"
#include "Kismet/GameplayStatics.h"
#include "Engine/World.h"
#include "Components/BoxComponent.h"
#include "Camera/CameraActor.h"
#include "Engine/Engine.h"
#include "Kismet/KismetMathLibrary.h"
#include "TimerManager.h"


// Sets default values
APlayerShip::APlayerShip()
{
 	// Set this pawn to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	PlayerMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("PlayerMesh"));
	SetRootComponent(PlayerMesh);

	CollisionBox = CreateDefaultSubobject<UBoxComponent>(TEXT("CollisionBox"));
	CollisionBox->SetupAttachment(GetRootComponent());

	Camera = CreateDefaultSubobject<UCameraComponent>(TEXT("Camera"));
	Camera->bUsePawnControlRotation = false;
	//Camera->SetupAttachment(SpringArm, USpringArmComponent::SocketName);

	//PlayerMesh->SetSimulatePhysics(true);

	static ConstructorHelpers::FObjectFinder<UStaticMesh> PlayerMeshComponent(TEXT("StaticMesh'/Game/Meshes/Player/SpaceShip.SpaceShip'"));
	if (PlayerMeshComponent.Succeeded())
	{
		PlayerMesh->SetStaticMesh(PlayerMeshComponent.Object);
	}

}

// Controls in c++
static void InitializeDefaultPawnInputBinding()
{
	static bool bindingsAdded = false;
	if (bindingsAdded == false)
	{
		bindingsAdded = true;


		//UPlayerInput::AddEngineDefinedAxisMapping(FInputAxisKeyMapping("MoveX", EKeys::W, 1.f));
		//UPlayerInput::AddEngineDefinedAxisMapping(FInputAxisKeyMapping("MoveX", EKeys::S, -1.f));

		UPlayerInput::AddEngineDefinedAxisMapping(FInputAxisKeyMapping("MoveY", EKeys::D, 1.f));
		UPlayerInput::AddEngineDefinedAxisMapping(FInputAxisKeyMapping("MoveY", EKeys::A, -1.f));

		UPlayerInput::AddEngineDefinedActionMapping(FInputActionKeyMapping("Shoot", EKeys::SpaceBar));
		UPlayerInput::AddEngineDefinedActionMapping(FInputActionKeyMapping("Reload", EKeys::R));
		UPlayerInput::AddEngineDefinedActionMapping(FInputActionKeyMapping("Dash", EKeys::LeftShift));

	}
}

// Called when the game starts or when spawned
void APlayerShip::BeginPlay()
{
	Super::BeginPlay();
	
	// Fixed camera position
	//Camera->SetWorldRotation(FRotator(-90.0f, 0.0f, 0.0f));
	//Camera->SetWorldLocation(FVector(1000.0f, 0.0f, 3000.0f));

	Camera->SetWorldRotation(FRotator(-30.0f, 0.0f, 0.0f));
	Camera->SetWorldLocation(FVector(-1000.0f, 0.0f, 1000.0f));

	InitLocation = PlayerMesh->GetComponentLocation();
	
	CollisionBox = this->FindComponentByClass<UBoxComponent>();

	if (CollisionBox) {
		CollisionBox->OnComponentBeginOverlap.AddDynamic(this, &APlayerShip::OnOverlap);
	}
	else {
		UE_LOG(LogTemp, Warning, TEXT("Collision box not found"));
	}

}

// Called every frame
void APlayerShip::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	InContact = false;

	// Collision "added", now make some invisible walls :)
	FHitResult HitResult;
	PlayerMesh->AddRelativeLocation(FVector(XValue, YValue, 0.f) * (PlayerSpeed + DashSpeed), true, &HitResult);

	if (bDash)
	{
		UWorld* NewWorld = GetWorld();
		UGameplayStatics::PlaySound2D(NewWorld, DashSound, 1.f, 1.f, 0.f, 0);

		if (DashSpeed > 0)
		{
			DashSpeed -= 1.5f;
			UE_LOG(LogTemp, Error, TEXT("DashSpeed is %f "), DashSpeed);
		}

		DashTimer += DeltaTime;

		//UE_LOG(LogTemp, Error, TEXT("DashTimer is %f "), DashTimer);
		if (DashTimer >= 3.f)
		{
			DashSpeed = 0;
			DashTimer = 0.f;
			bDash = false;

			//UE_LOG(LogTemp, Error, TEXT("DashSpeed is %f "), DashSpeed);

		}
	}

}

// Called to bind functionality to input
void APlayerShip::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

	InitializeDefaultPawnInputBinding();
	//PlayerInputComponent->BindAxis("MoveX", this, &APlayerShip::MoveXAxis);
	PlayerInputComponent->BindAxis("MoveY", this, &APlayerShip::MoveYAxis);
	PlayerInputComponent->BindAction("Shoot", EInputEvent::IE_Pressed, this, &APlayerShip::Shooting);
	PlayerInputComponent->BindAction("Reload", EInputEvent::IE_Pressed, this, &APlayerShip::Reload);
	PlayerInputComponent->BindAction("Dash", EInputEvent::IE_Pressed, this, &APlayerShip::Dash);


}

void APlayerShip::ResetLocation() const
{

}

void APlayerShip::Shooting()
{
	// When BulletAmount is 0 you have to reload
	if (BulletCurrent > 0)
	{
		BulletCurrent--;
		GEngine->AddOnScreenDebugMessage(-1, 12.f, FColor::White, FString::Printf(TEXT("Ammo :  %d "), BulletCurrent));

		UWorld* World = GetWorld();
		if (World)
		{
			FVector Location = GetActorLocation();
			// 150cm ahead of actor the bullet spawns from
			World->SpawnActor<AActor>(ActorToSpawn, Location + FVector(150.f, 0.f, 0.f), GetActorRotation());
			UGameplayStatics::PlaySound2D(World, ShootingSound, 1.f, 1.f, 0.f, 0);
		}

		if (BulletCurrent == 0)
		{
			GEngine->AddOnScreenDebugMessage(-1, 12.f, FColor::Red, FString::Printf(TEXT("No ammo Reload %d "), BulletCurrent));
		}
	}
	UE_LOG(LogTemp, Warning, TEXT("Shooting"));
}

float APlayerShip::GetHealth()
{
	return 0.0f;
}

void APlayerShip::UpdateHealth(float HealthChange)
{
}

FText APlayerShip::GetHealthIntText()
{
	return FText();
}

float APlayerShip::GetBUllet()
{
	return 0.0f;
}

void APlayerShip::UpdateBullet(float BulletChange)
{
}

FText APlayerShip::GetBulletIntText()
{
	return FText();
}

void APlayerShip::Reload()
{
	BulletCurrent = 30;
	UWorld* NewWorld = GetWorld();
	UGameplayStatics::PlaySound2D(NewWorld, ReloadSound, 1.f, 1.f, 0.f, 0);
	GEngine->AddOnScreenDebugMessage(-1, 12.f, FColor::Green, FString::Printf(TEXT("Reloaded"), BulletCurrent));
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
	if (DashTimer == 0)
	{
		bDash = true;

		if (bDash)
		{
			DashSpeed = 30.f;
		}
	}
}

void APlayerShip::OnOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComponent, int32 OtherbodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
	if (OtherActor->IsA(AAlien::StaticClass()))
	{
		UE_LOG(LogTemp, Warning, TEXT("Enemy hit ship"));

		// Changes levels from gaming to lose screen
		UWorld* l = GetWorld();
		UGameplayStatics::OpenLevel(l, TEXT("LVL_LoseScreen"));
	}
}

