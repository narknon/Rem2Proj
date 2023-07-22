#include "BreakableImpulseComponent.h"

UBreakableImpulseComponent::UBreakableImpulseComponent() {
    this->ImpulseRadius = 500.00f;
    this->ImpulseStrength = 100.00f;
    this->bApplyFalloff = true;
}

