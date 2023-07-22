#include "AnimNotify_StateParticleEffect.h"

UAnimNotify_StateParticleEffect::UAnimNotify_StateParticleEffect() {
    this->bIsStateTransient = true;
    this->bSoftDestroy = true;
    this->OptimizationType = ENotifyOptimizationType::None;
    this->bShowInPreview = true;
}

