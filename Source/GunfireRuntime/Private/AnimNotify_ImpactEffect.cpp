#include "AnimNotify_ImpactEffect.h"

UAnimNotify_ImpactEffect::UAnimNotify_ImpactEffect() {
    this->Type = EAnimImpactType::Foot;
    this->TraceDirection = EAnimImpactTraceDirection::Down;
    this->UpTraceOffset = 0.00f;
}

