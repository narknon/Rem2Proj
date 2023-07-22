#include "AnimationAssetTagged.h"

UAnimationAssetTagged::UAnimationAssetTagged() {
    this->bShouldOverrideBlendTime = false;
    this->BlendTimeOverride = 0.20f;
    this->bShouldOverrideBlendOut = false;
    this->BlendOutOverride = 0.20f;
    this->bShouldOverrideAutoBlendOut = false;
    this->bAutoBlendOutOverride = false;
}

