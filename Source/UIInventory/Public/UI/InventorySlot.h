// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "InventorySlot.generated.h"

DECLARE_DELEGATE_OneParam(FOnSlotButtonClickedSendIndex, int32);

class UButton;

/**
 * 
 */
UCLASS()
class UIINVENTORY_API UInventorySlot : public UUserWidget
{
	GENERATED_BODY()

public:
	UFUNCTION(BlueprintCallable)
	bool InventoryCheck() const;
	UFUNCTION(BlueprintCallable)
	FSlateBrush GetInventoryImage() const;

	FOnSlotButtonClickedSendIndex OnSendButtonIndex;
	
protected:
	void NativeConstruct() override;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite)
	UTexture2D* PickImage;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite)
	int32 Index;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta = (BindWidget))
	UButton* SlotButton;

private:
	UFUNCTION()
	void OnSlotButtonClicked();
};
