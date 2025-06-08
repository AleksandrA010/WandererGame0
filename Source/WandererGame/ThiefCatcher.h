// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "MainCharacter.h"
#include "GameFramework/SpringArmComponent.h"
#include "Camera/CameraComponent.h"
#include "ThiefCatcher.generated.h"

/**
 * 
 */
UCLASS()
class WANDERERGAME_API AThiefCatcher : public AMainCharacter
{
	GENERATED_BODY()

public:
	AThiefCatcher();

	UPROPERTY(VisibleAnywhere)
	USpringArmComponent* SpringArm;

	UPROPERTY(VisibleAnywhere)
	UCameraComponent* Camera;
	
	virtual void SetupPlayerInputComponent(class UInputComponent* MyPlayerInput) override;

	void MoveForwardBackward(float Value);

	void MoveRightLeft(float Value);

	void Jump();

	void StopJump();

};
