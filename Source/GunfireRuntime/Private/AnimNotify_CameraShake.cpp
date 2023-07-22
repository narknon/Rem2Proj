#include "AnimNotify_CameraShake.h"

UAnimNotify_CameraShake::UAnimNotify_CameraShake() {
    this->Shake = NULL;
    this->InnerRadius = 1000.00f;
    this->OuterRadius = 3000.00f;
    this->Falloff = 1.00f;
    this->OrientShakeTowardsEpicenter = false;
    this->bStateTransient = false;
    this->bIgnoreBlendOut = true;
}

