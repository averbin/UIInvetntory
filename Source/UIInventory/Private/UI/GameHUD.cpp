// Fill out your copyright notice in the Description page of Project Settings.


#include "UI/GameHUD.h"

#include "Components/Button.h"
#include "Kismet/GameplayStatics.h"

#include "UI/InventorySlot.h"

void UGameHUD::NativeConstruct()
{
    Super::NativeConstruct();
    PlayerController = UGameplayStatics::GetPlayerController(GetWorld(), 0);
}