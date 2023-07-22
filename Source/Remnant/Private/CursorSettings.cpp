#include "CursorSettings.h"

FCursorSettings::FCursorSettings() {
    this->Acceleration = 0.00f;
    this->MaxSpeed = 0.00f;
    this->SpeedFloor = 0.00f;
    this->DeadZone = 0.00f;
    this->CursorMovementMode = EAnalogCursorMovementMode::Direct;
    this->DoubleClickDelay = 0;
    this->SlowdownAccelerationScalar = 0.00f;
    this->SlowdownAccelerationTimeout = 0.00f;
    this->GravityIdleDelay = 0.00f;
    this->GravityDistanceToAnchorTolerance = 0.00f;
    this->GravityMaxDistanceNormalized = 0.00f;
    this->CursorTargetFrictionMod = 0.00f;
    this->AnalogSnapThreshold = 0.00f;
    this->AnalogSnapWindow = 0;
    this->AnalogSnapToleranceTime = 0;
    this->AnalogPostSnapCooldown = 0;
    this->AnalogSnapAngleToDistanceWeight = 0.00f;
    this->AnalogSnapAngleRange = 0.00f;
    this->AnalogSnapMaxDistanceNormalized = 0.00f;
    this->AnalogSnapMinDistance = 0.00f;
    this->RepeatSnapThresholdMod = 0.00f;
    this->RepeatSnapTimeout = 0.00f;
    this->bLerpOnManualSnap = false;
    this->bLerpOnControllerSnap = false;
    this->LerpOnSnapSpeedRelative = 0.00f;
    this->MinLerpFrames = 0;
    this->CursorLerpMovementMode = EAnalogCursorMovementMode::Direct;
}

