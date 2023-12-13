// Fill out your copyright notice in the Description page of Project Settings.


#include "UI/PickupWidget.h"
#include "Kismet/GameplayStatics.h"

void UPickupWidget::NativeConstruct()
{
    Super::NativeConstruct();
}

void UPickupWidget::ShowWidgetByDistance(float Distance)
{
    if (PickupActorRef)
    {
        if (auto PlayerController = UGameplayStatics::GetPlayerController(GetWorld(), 0))
        {
            FVector WorldLocation = PickupActorRef->GetActorLocation() + FVector(0.f, 0.f, Distance);
            FVector2D Position;
            if (PlayerController->ProjectWorldLocationToScreen(WorldLocation, Position))
            {
                SetVisibility(ESlateVisibility::Visible);
                SetPositionInViewport(Position);
            }
            else
            {
                SetVisibility(ESlateVisibility::Hidden);
            }
        }
    }
}