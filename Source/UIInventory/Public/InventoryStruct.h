// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/UserDefinedStruct.h"
#include "InventoryStruct.generated.h"

/**
 * 
 */
UCLASS()
class UIINVENTORY_API UInventoryStruct : public UUserDefinedStruct
{
	GENERATED_BODY()
	
protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	AActor* Item;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FText ActionText;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FText PickupText;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	UTexture2D* ItemImage;
};
