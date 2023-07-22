#include "UIHudReticuleComponent.h"

void UUIHudReticuleComponent::ShowHitIndicator(bool bIsCritical) {
}

void UUIHudReticuleComponent::OnNotifyHitTarget(const FDamageInfo& DamageInfo) {
}

ARangedWeapon* UUIHudReticuleComponent::GetRangedWeapon() const {
    return NULL;
}

float UUIHudReticuleComponent::GetHitAlpha() const {
    return 0.0f;
}

float UUIHudReticuleComponent::GetCurrentSpread() const {
    return 0.0f;
}

AActor* UUIHudReticuleComponent::GetAimable() const {
    return NULL;
}

UUIHudReticuleComponent::UUIHudReticuleComponent() {
    this->DrawMode = EReticuleDrawMode::RangedWeaponRequired;
    this->WeaponType = NULL;
    this->DefaultReticule = NULL;
    this->HitIndicatorSmoothTime = 0.20f;
    this->SpreadBlendRate = 20.00f;
    this->DisabledWeaponVisuals = EDisabledWeaponVisuals::ShowReticuleWithDisabledColor;
    this->bLimitToAimAssistRange = true;
    this->GhostReticuleSmoothingRate = 10.00f;
    this->MaxGhostReticuleOffset = 0.03f;
    this->CenterToGhostReticuleTolerance = 0.04f;
    this->AllowGhostReticuleOnCharacters = false;
    this->CachedCharacter = NULL;
}

