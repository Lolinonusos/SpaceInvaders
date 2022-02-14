// Fill out your copyright notice in the Description page of Project Settings.


#include "Bullet.h"
#include "Components/SphereComponent.h"
#include "Kismet/GameplayStatics.h"
#include <UObject/ConstructorHelpers.h>
#include "Engine/World.h"
#include "Alien.h"

// Sets default values
ABullet::ABullet()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	RootComponent = CreateDefaultSubobject<USphereComponent>(TEXT("SphereComp"));
	Cast<UShapeComponent>(RootComponent)->OnComponentBeginOverlap.AddDynamic(this, &ABullet::OnOverlap);

	BulletMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("BulletComp"));
	BulletMesh->SetupAttachment(RootComponent);
	//BulletMesh->SetCollisionResponseToChannels();

	static ConstructorHelpers::FObjectFinder<UStaticMesh> MeshComponentAsset(TEXT("StaticMesh'/Game/Meshes/BulletBoi/Bulletboi.Bulletboi'"));
	if (MeshComponentAsset.Succeeded()) {
		BulletMesh->SetStaticMesh(MeshComponentAsset.Object);
	}
}

// Called when the game starts or when spawned
void ABullet::BeginPlay()
{
	Super::BeginPlay();
	

}

// Called every frame
void ABullet::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	FVector NewLocation = GetActorLocation();
	NewLocation += GetActorForwardVector() * Speed * DeltaTime; // Makes sure the bullet moves forward
	SetActorLocation(NewLocation);
	TimeLived += DeltaTime;
		
	if (TimeLived > TimeToDespawn)
	{
		this->Destroy();
	}

}

void ABullet::OnOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComponent,
	int32 OtherbodyIndex, bool bFromSweep, const FHitResult& SweepResult) 
{
	// if it hits an enemy actor destroy enemy and this actor 
	if (OtherActor->IsA(AAlien::StaticClass()))
	{
		// Runs the hit function in Alien.cpp
		Cast<AAlien>(OtherActor)->Hit();

		// Particles
		UGameplayStatics::SpawnEmitterAtLocation(GetWorld(), BulletFire, GetTransform(), true);

		// SoundFX
		//UGameplayStatics::PlaySoundAtLocation(GetWorld(), BulletSound, GetActorLocation());
		UGameplayStatics::PlaySound2D(World, BulletHit, 1.f, 1.f, 0.f, 0);



		// Destroy Bullet
		Destroy();
	}


	//UE_LOG(LogTemp, Warning, TEXT(" Overlapped"));


}