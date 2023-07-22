#include "AnimNotify_AnimatedCameraCutFOVTransition.h"

UAnimNotify_AnimatedCameraCutFOVTransition::UAnimNotify_AnimatedCameraCutFOVTransition() {
    this->StartingCameraFOV = 60.00f;
    this->EndingCameraFOV = 60.00f;
    this->FOVPercentCurve = NULL;
}

