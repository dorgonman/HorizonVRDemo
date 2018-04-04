// Fill out your copyright notice in the Description page of Project Settings.

#include "DemoVRCharacter.h"

#include "GameFramework/SpringArmComponent.h"
#include "Camera/CameraComponent.h"
ADemoVRCharacter::ADemoVRCharacter()
{
	SpringArmComponent = CreateDefaultSubobject<USpringArmComponent>(TEXT("SpringArmComponent"));
	SpringArmComponent->SetupAttachment(RootComponent);
	SpringArmComponent->TargetArmLength = 0.0f;
	CameraComponent->SetupAttachment(SpringArmComponent);

	LeftMotionControllerActor->SetupAttachment(SpringArmComponent);
	RightMotionControllerActor->SetupAttachment(SpringArmComponent);
}
