#include "TrailCustomization.h"

UTrailCustomization::UTrailCustomization() {
    this->SkeletalMeshPropertyName = TEXT("Actor");
    this->LifetimePropertyName = TEXT("Lifetime");
    this->Lifetime = 1.00f;
}

