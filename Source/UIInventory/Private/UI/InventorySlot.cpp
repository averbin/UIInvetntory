// Fill out your copyright notice in the Description page of Project Settings.


#include "UI/InventorySlot.h"
#include "Blueprint/WidgetBlueprintLibrary.h"
#include "Components/Button.h"

void UInventorySlot::NativeConstruct()
{
    Super::NativeConstruct();

    if (SlotButton)
    {
        SlotButton->OnClicked.AddDynamic(this, &UInventorySlot::OnSlotButtonClicked);
    }
}

bool UInventorySlot::InventoryCheck() const
{
    if (PickImage)
        return PickImage->IsValidLowLevel();
    return false;
}

FSlateBrush UInventorySlot::GetInventoryImage() const
{
    return GetDefault<UWidgetBlueprintLibrary>()->MakeBrushFromTexture(PickImage);
}

void UInventorySlot::OnSlotButtonClicked()
{
    OnSendButtonIndex.ExecuteIfBound(Index);
}