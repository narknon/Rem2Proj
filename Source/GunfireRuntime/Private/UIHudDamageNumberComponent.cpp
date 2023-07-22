#include "UIHudDamageNumberComponent.h"

void UUIHudDamageNumberComponent::OnNotifyHitTarget(const FDamageInfo& DamageInfo) {
}

void UUIHudDamageNumberComponent::ClearNumberQueue() {
}

UUIHudDamageNumberComponent::UUIHudDamageNumberComponent() {
    this->bInterpolateColorsOnOverlap = false;
    this->bUseCriticalParameters = false;
    this->bUseWeakSpotParameters = false;
    this->bUseCriticalWeakSpotParameters = false;
    this->bUseZeroDamageText = false;
    this->bUseRoundedDamageAsZeroDamage = true;
    this->bIgnoreSpecialsOnZeroDamage = true;
    this->ResistColorAlpha = 0.50f;
    this->CachedCharacter = NULL;
    this->CachedController = NULL;
}

