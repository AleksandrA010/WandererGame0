// Fill out your copyright notice in the Description page of Project Settings.


#include "ThiefCatcher.h"

AThiefCatcher::AThiefCatcher() : Super()
{
	SpringArm = CreateDefaultSubobject<USpringArmComponent>(TEXT("SptingArmComponent"));
	SpringArm->SetupAttachment(RootComponent);
	SpringArm->TargetArmLength = 500.0f;

	Camera = CreateDefaultSubobject<UCameraComponent>(TEXT("MainCamera"));
	Camera->SetupAttachment(SpringArm);

	SpringArm->bUsePawnControlRotation = true;
	Camera->bUsePawnControlRotation = false;

	bUseControllerRotationPitch = false;
	bUseControllerRotationYaw = false;
	bUseControllerRotationRoll = false;

	bIsSitting = false;
}

void AThiefCatcher::SetupPlayerInputComponent(UInputComponent* MyPlayerInput)
{
	Super::SetupPlayerInputComponent(MyPlayerInput);

	MyPlayerInput->BindAxis("MoveForwardBackward", this, &AThiefCatcher::MoveForwardBackward);
	MyPlayerInput->BindAxis("MoveRightLeft", this, &AThiefCatcher::MoveRightLeft);

	MyPlayerInput->BindAxis("Turn", this, &AThiefCatcher::AddControllerYawInput);
	MyPlayerInput->BindAxis("LookUpDown", this, &AThiefCatcher::AddControllerPitchInput);

	MyPlayerInput->BindAction("Jump", IE_Pressed, this, &AThiefCatcher::Jump);
	MyPlayerInput->BindAction("Jump", IE_Released, this, &AThiefCatcher::StopJump);

	MyPlayerInput->BindAction("Sit", IE_Pressed, this, &AThiefCatcher::ToggleSit);

}

void AThiefCatcher::MoveForwardBackward(float Value)
{
	FVector Direction = FRotationMatrix(Controller->GetControlRotation()).GetScaledAxis(EAxis::X);
	AddMovementInput(Direction, Value);
}

void AThiefCatcher::MoveRightLeft(float Value)
{
	FVector Direction = FRotationMatrix(Controller->GetControlRotation()).GetScaledAxis(EAxis::Y);
	AddMovementInput(Direction, Value);
}

void AThiefCatcher::Jump()
{
	bPressedJump = true;
}

void AThiefCatcher::StopJump()
{
	bPressedJump = false;
}

// ���������� ������� ����������
void AThiefCatcher::StartSit()
{
	if (!bIsSitting)
	{
		bIsSitting = true;
		// ����� ����� �������� ������ ��������� ������ ��������� ��� ������ ������� ����������
		// ��������: ��������� ������ SpringArm ��� �������� ���������
		SpringArm->TargetArmLength = 300.0f; // ������: ��������� ����� SpringArm ��� ����������
	}
}

void AThiefCatcher::StopSit()
{
	if (bIsSitting)
	{
		bIsSitting = false;
		// ���������� �������� ���������
		SpringArm->TargetArmLength = 500.0f; // ������: ���������� �������� ����� SpringArm
	}
}

void AThiefCatcher::ToggleSit()
{
	if (bIsSitting)
	{
		StopSit();
	}
	else
	{
		StartSit();
	}
}
