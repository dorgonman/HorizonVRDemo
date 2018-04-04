// Fill out your copyright notice in the Description page of Project Settings.

#include "MyTestActor.h"
#include "Components/StaticMeshComponent.h"

// Sets default values
AMyTestActor::AMyTestActor()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("RootComponent"));

#if !UE_SERVER
	MeshComponent = CreateOptionalDefaultSubobject<UStaticMeshComponent>(TEXT("MeshComponent"));
	MeshComponent->SetupAttachment(RootComponent);
#endif
	
}

AMyTestActor::AMyTestActor(const FObjectInitializer& ObjectInitializer)
#if UE_SERVER
	: Super(ObjectInitializer.DoNotCreateDefaultSubobject(TEXT("MeshComponent")))
#endif
{

}

// Called when the game starts or when spawned
void AMyTestActor::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AMyTestActor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

