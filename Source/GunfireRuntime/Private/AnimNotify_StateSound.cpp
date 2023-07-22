#include "AnimNotify_StateSound.h"

UAnimNotify_StateSound::UAnimNotify_StateSound() {
    this->bIsStateTransient = false;
    this->bFilterDuringCinematics = true;
    this->FadeOut = 0.20f;
    this->bAllowLooping = true;
}

