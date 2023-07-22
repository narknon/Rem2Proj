#include "UIHudHitIndicatorComponent.h"

void UUIHudHitIndicatorComponent::OnNotifyTakeDamage(const FDamageInfo& DamageInfo) {
}

UUIHudHitIndicatorComponent::UUIHudHitIndicatorComponent() {
    this->HitIndicator = NULL;
    this->HitIndicatorAlpha = 1.00f;
    this->HitIndicatorScale = 1.00f;
    this->HitIndicatorTimeout = 0.75f;
    this->HitIndicatorOffset = 150.00f;
    this->HitFlash = NULL;
    this->HitFlashAlpha = 1.00f;
    this->HitFlashTimeout = 0.25f;
    this->CachedCharacter = NULL;
}

