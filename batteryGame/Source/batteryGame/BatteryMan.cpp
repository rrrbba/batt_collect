// Fill out your copyright notice in the Description page of Project Settings.


#include "BatteryMan.h"

// Sets default values
ABatteryMan::ABatteryMan()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	//initialize variables
	GetCapsuleComponent()->InitCapsuleSize(42.0f, 96.0f);

	//Only allow camera to rotate, not character
	bUseControllerRotationPitch = false;
	bUseControllerRotationYaw = false;
	bUseControllerRotationRoll = false;

	//Allow character to rotate in the direction that it is moving
	GetCharacterMovement()->bOrientRotationToMovement = true;
	//The rate at which it rotates
	GetCharacterMovement()->RotationRate = FRotator(0.0f, 540.0f, 0.0f);
	//The velocity when character jumps
	GetCharacterMovement()->JumpZVelocity = 600.0f;
	//How much you can control character in the air
	GetCharacterMovement()->AirControl = 0.2f;
}

// Called when the game starts or when spawned
void ABatteryMan::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ABatteryMan::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void ABatteryMan::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

