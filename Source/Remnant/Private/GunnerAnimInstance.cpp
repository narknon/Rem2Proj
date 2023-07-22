#include "GunnerAnimInstance.h"

UGunnerAnimInstance::UGunnerAnimInstance() {
    this->bIsTurning = false;
    this->bIsTurningRight = false;
    this->TurnSpeedAlpha = 0.00f;
    this->bIsAimingForward = false;
    this->bNeedsTargetAlign = false;
    this->TurnSpeedRef = 280.00f;
    this->AimForwardRef = 100.00f;
    this->bCheckTargetAlign = false;
    this->TargetAlignTag = TEXT("TargetAlign");
    this->WindupState = EWindupState::None;
    this->OverdrawnAlpha = 0.00f;
}

