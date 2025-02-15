// Fill out your copyright notice in the Description page of Project Settings.

#include "BattleTank.h"
#include "Tank.h"


// Sets default values
ATank::ATank()
{
 	// Set this pawn to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ATank::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ATank::Tick( float DeltaTime )
{
	Super::Tick( DeltaTime );

}

void ATank::AimAt(FVector Location)
{
	auto OurTankName = GetName();

	UE_LOG(LogTemp, Warning, TEXT("%s aiming at location: %s"), *OurTankName, *Location.ToString());
}

// Called to bind functionality to input
void ATank::SetupPlayerInputComponent(class UInputComponent* InputComponent)
{
	Super::SetupPlayerInputComponent(InputComponent);
	InputComponent->BindAction("Turret_Clockwise", IE_Pressed, this, &ATank::RotateTurret);
}

void ATank::RotateTurret()
{
	UE_LOG(LogTemp, Warning, TEXT("Rotating Turret"));
}
