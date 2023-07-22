#include "TrailCustomizationEffect.h"

UTrailCustomizationEffect::UTrailCustomizationEffect() {
    this->SkeletalMeshPropertyName = TEXT("Actor");
    this->LifetimePropertyName = TEXT("Lifetime");
    this->Lifetime = 1.00f;
}

