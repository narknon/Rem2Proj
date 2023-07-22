#include "SwimmingCameraState.h"

USwimmingCameraState::USwimmingCameraState() {
    this->WaterThickness = 50.00f;
    this->EmergeTime = 0.40f;
    this->EmergeEaseExp = 2.00f;
    this->EmergeMaximumPitch = 5.00f;
    this->SubmergeTime = 0.40f;
    this->SubmergeEaseExp = 2.00f;
    this->SubmergeMaximumPitch = 5.00f;
    this->RotationBlendTime = 0.20f;
    this->ExitExtraBlendTime = 0.10f;
    this->CachedStateMachine = NULL;
    this->PhysicsBounds = NULL;
}

