#include "UITweenManager.h"

bool UUITweenManager::StopTween(int32 TweenID) {
    return false;
}

int32 UUITweenManager::StartTimer(float Time, const FUITweenTimerDelegate& Event) {
    return 0;
}

int32 UUITweenManager::Size(UWidget* Widget, const FVector2D& DesiredSize, float Time, EUIEaseType EaseType, float Exponent) {
    return 0;
}

int32 UUITweenManager::ScaleByCurve(UWidget* Widget, UCurveFloat* Curve, float Time, float Offset) {
    return 0;
}

int32 UUITweenManager::Scale(UWidget* Widget, const FVector2D& DesiredScale, float Time, EUIEaseType EaseType, float Exponent) {
    return 0;
}

int32 UUITweenManager::MoveTo(UWidget* Widget, UWidget* ToWidget, float Time, EUIEaseType EaseType, float Exponent) {
    return 0;
}

int32 UUITweenManager::MoveRelative(UWidget* Widget, const FVector2D& Offset, float Time, EUIEaseType EaseType, float Exponent) {
    return 0;
}

int32 UUITweenManager::Move(UWidget* Widget, const FVector2D& Destination, float Time, EUIEaseType EaseType, float Exponent) {
    return 0;
}

bool UUITweenManager::IsTweenFinished(int32 TweenID) const {
    return false;
}

void UUITweenManager::InvalidateHandle(int32& TweenHandle) {
}

UUITweenManager* UUITweenManager::GetInstance(UObject* WorldContextObject) {
    return NULL;
}

int32 UUITweenManager::FlashColor(UWidget* Widget, FLinearColor FromColor, FLinearColor ToColor, float Time, float Exponent) {
    return 0;
}

int32 UUITweenManager::ColorByCurve(UWidget* Widget, FLinearColor FromColor, FLinearColor ToColor, UCurveFloat* Curve, float Time) {
    return 0;
}

int32 UUITweenManager::AnimateColor(UWidget* Widget, FLinearColor ToColor, float Time, EUIEaseType EaseType, float Exponent) {
    return 0;
}

int32 UUITweenManager::AnimateAlpha(UWidget* Widget, float ToAlpha, float Time, EUIEaseType EaseType, float Exponent) {
    return 0;
}

UUITweenManager::UUITweenManager() {
}

