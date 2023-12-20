// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"

#include "CharacterBase.generated.h"

class UInventoryStruct;
class UArrowComponent;

UCLASS()
class UIINVENTORY_API ACharacterBase : public ACharacter
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	ACharacterBase();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	UPROPERTY(BlueprintReadWrite, meta = (AllowPrivateAccess = "true"))
	TArray<UInventoryStruct*> Inventory;

	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category=Stats)
	float HealthValue{ 0.75f };
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = Stats)
	float EnergyValue{ .5f };
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = Stats)
	float MoodValue{ .25f };

	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = Components)
	UArrowComponent* DropArrowComponent;
public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

};
