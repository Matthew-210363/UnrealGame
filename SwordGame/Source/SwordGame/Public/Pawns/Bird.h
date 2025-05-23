// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Pawn.h"
#include "InputAction.h"
#include "Bird.generated.h"

class USpringArmComponent;
class UCameraComponent;

UCLASS()
class SWORDGAME_API ABird : public APawn
{
	GENERATED_BODY()

public:
	// Sets default values for this pawn's properties
	ABird();

protected:
	UPROPERTY(VisibleAnywhere)
	USkeletalMeshComponent* BirdMesh;

	UPROPERTY(VisibleAnywhere)
	USpringArmComponent* SpringArm;

	UPROPERTY(VisibleAnywhere)
	UCameraComponent* Camera;
	
	UPROPERTY(EditAnywhere, Category="Input")
	class UInputMappingContext* InputMapping;

	UPROPERTY(EditAnywhere, Category="Input")
	class UInputAction* MoveAction;

	UPROPERTY(EditAnywhere, Category="Input")
	class UInputAction* LookAction;
	
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

private:
	void Move(const FInputActionInstance& Instance);
	void Look(const FInputActionInstance& Instance);
};
