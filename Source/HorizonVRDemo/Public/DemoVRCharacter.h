// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "HorizonVRCharacter.h"
#include "DemoVRCharacter.generated.h"


class USpringArmComponent;
/**
 * 
 */
UCLASS()
class HORIZONVRDEMO_API ADemoVRCharacter : public AHorizonVRCharacter
{
	GENERATED_BODY()
	
public:
	ADemoVRCharacter();
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "HorizonPlugin|Camera")
	USpringArmComponent* SpringArmComponent = nullptr;;
};
