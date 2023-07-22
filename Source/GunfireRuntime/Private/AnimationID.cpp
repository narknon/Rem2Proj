#include "AnimationID.h"

FAnimationID::FAnimationID() {
    this->StartTime = 0.00f;
    this->BlendTime = 0.00f;
    this->BlendOut = 0.00f;
    this->Loop = false;
    this->ResetOnReplay = false;
    this->AutoBlendOutMontage = false;
}

