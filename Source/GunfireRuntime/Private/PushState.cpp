#include "PushState.h"

UPushState::UPushState() {
    this->MaxAnchorSpeed = 200.00f;
    this->MaxAnchorVerticalSpeed = 100.00f;
    this->MaxDistanceFromConvergePoint = 0.00f;
    this->MaxTiltArc = 0.00f;
    this->ObstructionCheckDistance = 0.00f;
    this->ObstructionCheckCapsuleScale = 0.90f;
    this->ObstructionCheckCapsuleHeightOffset = 30.00f;
    this->bPushAnchor = false;
    this->PushMethod = EPushMethod::Impulse;
    this->PushForce = 1000.00f;
    this->PushForceAcceleration = 2000.00f;
    this->InitialPushForceScale = 0.00f;
    this->LiftingForce = 100.00f;
    this->BrakingForce = 50.00f;
    this->bScaleForceWithMass = true;
    this->MaxPushVelocity = 150.00f;
    this->MinimumInputStrength = 0.10f;
    this->WallCheckDistance = 0.00f;
    this->WallCheckWidth = 0.00f;
    this->InputValidationDistance = 50.00f;
    this->InputValidationCapsuleScale = 0.90f;
    this->InputValidationCapsuleHeightOffset = 30.00f;
    this->bUseDigitalInput = true;
    this->PushLocation = EInteractivePushForceLocation::None;
    this->MaxPushArc = -1.00f;
    this->BrakingArc = -1.00f;
    this->MinimumPushTime = 0.10f;
    this->MinimumBrakeTime = 0.10f;
    this->MaximumBrakeTime = 0.50f;
    this->MaxAngularVelocity = 0.00f;
    this->bReoreintToVelocity = false;
    this->TurnSpeedAcceleration = 180.00f;
    this->ReorientToVelocityHeightOffset = 30.00f;
    this->ReorientToVelocityMinSpeed = 50.00f;
    this->ReorientToVelocityArc = 40.00f;
    this->ReorientToVelocityAdjustAngle = 30.00f;
    this->MinimumPivotRadius = 100.00f;
    this->Facing = CharacterFacing::Current;
    this->FacingOffset = 0.00f;
    this->MaxSpeed = 0.00f;
    this->MaxSpeedBackwards = -1.00f;
    this->BackwardStartAngle = 0.00f;
    this->Acceleration = 0.00f;
    this->Deceleration = 4000.00f;
    this->TurnSpeed = 0.00f;
    this->TurnSmoothTime = 0.00f;
    this->GroundFriction = 8.00f;
    this->RootMotionMethod = ERootMotionVelocityMethod::RootMotionOnly;
    this->bUseExclusiveRootMotion = true;
    this->ConstrainToGround = false;
    this->UseHeadingAsAccelDirection = false;
    this->bAllowVerticalInputAcceleration = true;
    this->bForceDigitalInput = false;
}

