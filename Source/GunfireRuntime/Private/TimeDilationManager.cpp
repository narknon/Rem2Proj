#include "TimeDilationManager.h"

void UTimeDilationManager::SetTimeDilationMode(AActor* InActor, ETimeDilationMode NewMode) {
}

void UTimeDilationManager::SetTimeDilation(AActor* InActor, float InTimeDilation, FName Tag) {
}

void UTimeDilationManager::SetGlobalTimeDilation(UObject* WorldContextObject, float InTimeDilation, FName Tag) {
}

void UTimeDilationManager::RefreshTimeDilationEffect(AActor* InActor, FTimeDilationEffectHandle Handle) {
}

FTimeDilationEffectHandle UTimeDilationManager::PlayTimeDilationEffect(AActor* InActor, float InTimeDilation, float InDuration, float EaseInTime, float EaseOutTime, bool bIsHitPause) {
    return FTimeDilationEffectHandle{};
}

FTimeDilationEffectHandle UTimeDilationManager::PlayGlobalTimeDilationEffect(UObject* WorldContextObject, float InTimeDilation, float InDuration, float EaseInTime, float EaseOutTime) {
    return FTimeDilationEffectHandle{};
}

void UTimeDilationManager::OnCinematic(APlayerControllerGunfire* Player, bool bIsInCinematicMode) {
}

bool UTimeDilationManager::IsTimeDilationEffectEasingOut(AActor* InActor, FTimeDilationEffectHandle Handle) {
    return false;
}

bool UTimeDilationManager::IsTimeDilationEffectActive(AActor* InActor, FTimeDilationEffectHandle Handle) {
    return false;
}

bool UTimeDilationManager::IsPlayingHitPause(AActor* InActor) {
    return false;
}

float UTimeDilationManager::GetTimeDilation(AActor* InActor, bool bOnlyForTag, FName Tag) {
    return 0.0f;
}

float UTimeDilationManager::GetGlobalTimeDilation(UObject* WorldContextObject, bool bOnlyForTag, FName Tag) {
    return 0.0f;
}

void UTimeDilationManager::EaseOutTimeDilationEffect(AActor* InActor, FTimeDilationEffectHandle Handle) {
}

void UTimeDilationManager::ClearTimeDilationEffect(AActor* InActor, FTimeDilationEffectHandle Handle) {
}

void UTimeDilationManager::ClearTimeDilation(AActor* InActor, bool bClearEffects, bool bOnlyForTag, FName Tag) {
}

void UTimeDilationManager::ClearGlobalTimeDilationEffect(UObject* WorldContextObject, FTimeDilationEffectHandle Handle) {
}

void UTimeDilationManager::ClearGlobalTimeDilation(UObject* WorldContextObject, bool bClearEffects, bool bOnlyForTag, FName Tag) {
}

void UTimeDilationManager::ClearAllTimeDilation(UObject* WorldContextObject) {
}

UTimeDilationManager::UTimeDilationManager() {
}

