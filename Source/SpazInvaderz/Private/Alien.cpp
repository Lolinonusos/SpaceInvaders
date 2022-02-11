// Fill out your copyright notice in the Description page of Project Settings.


#include "Alien.h"

#include "Components/StaticMeshComponent.h"


// Sets default values
AAlien::AAlien()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	EnemyMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("EnemyMesh"));
	SetRootComponent(EnemyMesh);

	static ConstructorHelpers::FObjectFinder<UStaticMesh> MeshComponentAsset(TEXT("StaticMesh'/Game/Meshes/Capybara_Collectible2.Capybara_Collectible2'"));
	if (MeshComponentAsset.Succeeded()) {
		EnemyMesh->SetStaticMesh(MeshComponentAsset.Object);
	}
}

// Called when the game starts or when spawned
void AAlien::BeginPlay()
{
	Super::BeginPlay();
	


}

// Called every frame
void AAlien::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	FVector NewLocation = GetActorLocation();
	NewLocation += (MoveDirection * Speed * DeltaTime);
	SetActorLocation(NewLocation);

	if (NewLocation.X < DestroyPlacement)
	{
		DeleteThisEnemy = true;
	}
}

void AAlien::Hit()
{
	UE_LOG(LogTemp, Warning, TEXT("Hit"));
	SetActorHiddenInGame(true);
	SetActorEnableCollision(false);
	DeleteThisEnemy = true;
}

