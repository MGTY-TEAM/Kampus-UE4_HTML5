﻿// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Core/BaseFirstPersonCharacter.h"
#include "GameFramework/Character.h"
#include "Interfaces/Interaction/Interactable.h"

#include "Drone.generated.h"

UCLASS()
class KAMPUS_API ADrone : public ACharacter, public IInteractable
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	ADrone();
	UPROPERTY(EditDefaultsOnly, Category = "Mesh")
	UStaticMeshComponent* Robot;
	UPROPERTY(EditDefaultsOnly, Category = "Mesh")
	UStaticMeshComponent* Face;

	ABaseFirstPersonCharacter* PlayerCharacter;

	virtual void Interact() override;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;
};
