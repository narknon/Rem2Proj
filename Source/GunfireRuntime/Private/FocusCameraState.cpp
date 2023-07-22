#include "FocusCameraState.h"

UFocusCameraState::UFocusCameraState() {
    this->DistanceMin = 200.00f;
    this->DistanceMax = 400.00f;
    this->DistanceAdjustSmoothTime = 0.20f;
    this->PivotRatioToTarget = 0.75f;
    this->PitchMin = -45.00f;
    this->PitchMax = 45.00f;
    this->PitchDefault = -10.00f;
    this->LockPitchToTarget = false;
    this->PitchOffset = 20.00f;
    this->HeightOffset = 150.00f;
    this->LeftRightOffset = 0.00f;
    this->LeftRightOffsetAdjustSmoothTime = 0.20f;
    this->PivotSmoothTimeOnGround = 0.10f;
    this->PivotSmoothTimeInAir = 0.05f;
    this->RotationSmoothTime = 0.10f;
    this->FadeCharacterDistance = 25.00f;
    this->YawOffset = 20.00f;
    this->YawOffsetProjectDist = 250.00f;
    this->YawOffsetSmoothTime = 0.50f;
    this->LockNoTargetHeading = true;
}

