#include "PlatformCameraState.h"

UPlatformCameraState::UPlatformCameraState() {
    this->DistanceMin = 200.00f;
    this->DistanceMax = 400.00f;
    this->DistancePitchScalarMin = 1.50f;
    this->DistancePitchScalarMax = 0.25f;
    this->DistanceAdjustSmoothTime = 0.20f;
    this->MinDistanceAdjustSmoothTime = 0.10f;
    this->YawSpeed = 240.00f;
    this->PitchMin = -45.00f;
    this->PitchMax = 45.00f;
    this->PitchSpeed = 120.00f;
    this->CameraRotateSmoothTime = 0.10f;
    this->BaseLocation = EBaseLocationMethod::CapsuleBase;
    this->HeightOffset = 150.00f;
    this->HeightOffsetAtPitchMin = -1.00f;
    this->HeightOffsetAtPitchMax = -1.00f;
    this->LeftRightOffset = 0.00f;
    this->VelocityOffset = 0.00f;
    this->VelocityRefMin = 200.00f;
    this->VelocityRefMax = 400.00f;
    this->VelocityOffsetSmoothTime = 0.50f;
    this->PivotSmoothTimeOnGround = 0.10f;
    this->PivotSmoothTimeInAir = 0.05f;
    this->PivotSmoothTimeOverride = 0.00f;
    this->LateralPivotSmooth = 0.06f;
    this->AutoCenterCondition = EAutoCenterCondition::NotMoving;
    this->AutoCenterYaw = true;
    this->GamepadOnlyAutoCenterYaw = true;
    this->UseOwnerHeadingForAutoCenterYaw = false;
    this->AutoCenterYawInterpSpeed = 5.00f;
    this->AutoCenterPitchInterpSpeed = 1.00f;
    this->AutoCenterSmoothTime = 0.10f;
    this->AutoCenterDelay = 10.00f;
    this->AutoCenterPitch = -10.00f;
    this->AutoCenterFallPitch = -30.00f;
    this->AutoCenterFallRefStart = -500.00f;
    this->AutoCenterFallRefEnd = -1500.00f;
    this->GroundSlopeScalar = 1.00f;
    this->FadeCharacterDistance = 25.00f;
    this->AllowTargetLock = false;
    this->TargetLockYawInterpSpeed = 10.00f;
    this->TargetLockPitchInterpSpeed = 10.00f;
    this->TargetLockPitchOffset = 20.00f;
    this->TargetLockYawOffset = 25.00f;
    this->DoCameraAvoidance = false;
    this->CameraAvoidanceAngleThresh = 100.00f;
}

