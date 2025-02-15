// Fill out your copyright notice in the Description page of Project Settings.


#include "Pawns/Bird.h"
#include "InputMappingContext.h"
#include "EnhancedInputSubsystems.h"
#include "EnhancedInputComponent.h"
#include "Camera/CameraComponent.h"
#include "GameFramework/InputSettings.h"
#include "GameFramework/SpringArmComponent.h"


// Sets default values
ABird::ABird()
{
 	// Set this pawn to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	/*
	BirdMesh = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("Bird"));
	BirdMesh->SetupAttachment(RootComponent);
	SpringArm = CreateDefaultSubobject<USpringArmComponent>(TEXT("SpringArm"));
	SpringArm->SetupAttachment(RootComponent);
	Camera =  CreateDefaultSubobject<UCameraComponent>(TEXT("Camera"));
	Camera->SetupAttachment(SpringArm);
	
	AutoPossessPlayer = EAutoReceiveInput::Player0;*/
}

// Called when the game starts or when spawned
void ABird::BeginPlay()
{
	Super::BeginPlay();

	APlayerController* PlayerController = Cast<APlayerController>(GetController());
	UEnhancedInputLocalPlayerSubsystem* InputSystem = ULocalPlayer::GetSubsystem<UEnhancedInputLocalPlayerSubsystem>(PlayerController->GetLocalPlayer());
	InputSystem->AddMappingContext(InputMapping, 0);
}

// Called every frame
void ABird::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void ABird::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

	UEnhancedInputComponent* EnhancedPlayerInputComponent = CastChecked<UEnhancedInputComponent>(PlayerInputComponent);
	EnhancedPlayerInputComponent->BindAction(MoveAction, ETriggerEvent::Triggered, this, &ABird::Move);
	EnhancedPlayerInputComponent->BindAction(LookAction, ETriggerEvent::Triggered, this, &ABird::Look);
}

void ABird::Move(const FInputActionInstance& Instance)
{
	FVector2D vector = Instance.GetValue().Get<FVector2D>();
	FVector forward = GetActorForwardVector();
	if (vector.X > 0)
	{
		AddMovementInput(forward, vector.X);
	}
}

void ABird::Look(const FInputActionInstance& Instance)
{
	FVector2D vector = Instance.GetValue().Get<FVector2D>();
	AddControllerPitchInput(vector.X);
	AddControllerYawInput(vector.Y);
}


