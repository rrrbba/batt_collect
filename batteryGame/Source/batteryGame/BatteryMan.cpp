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

	CameraBoom = CreateDefaultSubobject<USpringArmComponent>(TEXT("CameraBoom"));
	CameraBoom->SetupAttachment(RootComponent); //makes it a child of the capsule

	//How far the spring arm is going to be away from the player
	CameraBoom->TargetArmLength = 300.0f;
	//Rotate the arm based on the controller
	CameraBoom->bUsePawnControlRotation = true;

	//Create camera
	FollowCamera = CreateDefaultSubobject<UCameraComponent>(TEXT("FollowCamera"));
	//Attach camera to the end of the camera boom and let the boom adjust the match controller rotation of the camera
	FollowCamera->SetupAttachment(CameraBoom, USpringArmComponent::SocketName);
	//The camera doesn't rotate relative to the arm
	FollowCamera->bUsePawnControlRotation = false;

	bDead = false;
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

	//Bind the mouse (found under project settings -> input -> axis mappings -> turn
	//this refers to the class ABatteryMan, z = yaw
	PlayerInputComponent->BindAxis("Turn", this, &APawn::AddControllerYawInput);
	PlayerInputComponent->BindAxis("LookUp", this, &APawn::AddControllerPitchInput);

	//Binding jump action
	PlayerInputComponent->BindAction("Jump", IE_Pressed, this, &ACharacter::Jump);
	PlayerInputComponent->BindAction("Jump", IE_Released, this, &ACharacter::StopJumping);

	//Bind move forward and right
	PlayerInputComponent->BindAxis("MoveForward", this, ABatteryMan::MoveForward);
	PlayerInputComponent->BindAxis("MoveRight", this, &ABatteryMan::MoveRight);
}

void ABatteryMan::MoveForward(float Axis)
{

}

void ABatteryMan::MoveRight(float Axis)
{

}


