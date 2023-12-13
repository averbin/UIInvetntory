// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "PickupWidget.generated.h"

/**
 * 
 */
UCLASS()
class UIINVENTORY_API UPickupWidget : public UUserWidget
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	AActor* PickupActorRef;

protected:
	virtual void NativeConstruct() override;
	UFUNCTION(BlueprintCallable)
	void ShowWidgetByDistance(float Distance);
};
