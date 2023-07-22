#include "AnimationNamed.h"

UAnimationNamed::UAnimationNamed() {
    this->StartTime = 0.00f;
    this->BlendTime = 0.20f;
    this->BlendOut = -1.00f;
    this->Loop = false;
    this->ResetOnReplay = false;
    this->AutoBlendOutMontage = true;
    this->SelectionMode = EAnimationNamedSelectionMode::Random;
    this->DirectionalComponent = EDirectionalAnimationComponent::YawOnly;
    this->bApplyDistanceMatching = false;
    this->bDynamicallyUpdateEachFrame = false;
    this->DynamicUpdatesBlendTimeOverride = -1.00f;
}

