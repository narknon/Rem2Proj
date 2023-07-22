#include "AnimatedCameraStateDecorator.h"

UAnimatedCameraStateDecorator::UAnimatedCameraStateDecorator() {
    this->ApplyToLocalPlayer = false;
    this->AllowInput = true;
    this->LockCameraStateChanges = false;
    this->CameraFOV = 90.00f;
    this->CameraBlendTime = 0.00f;
    this->CameraBlendOutTime = 0.00f;
    this->CinematicMode = ECincematicMode::None;
    this->bAffectsInput = false;
    this->bAffectsHUD = true;
}

