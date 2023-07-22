#include "AnimNotify_CameraEffect.h"

UAnimNotify_CameraEffect::UAnimNotify_CameraEffect() {
    this->ParticleSystem = NULL;
    this->Duration = 0.00f;
    this->Channel = 0;
    this->OnlyFireInWater = true;
}

