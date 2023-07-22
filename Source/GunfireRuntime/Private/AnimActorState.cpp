#include "AnimActorState.h"

void UAnimActorState::UpdateMovementParams(UStateMachineComponent* StateMachine) {
}

UAnimActorState::UAnimActorState() {
    this->Facing = CharacterFacing::MoveDir;
    this->FacingOffset = 0.00f;
    this->MaxSpeed = 400.00f;
    this->MaxSpeedBackwards = -1.00f;
    this->BackwardStartAngle = 0.00f;
    this->Acceleration = 2000.00f;
    this->Deceleration = 2000.00f;
    this->TurnSpeed = 360.00f;
    this->TurnSmoothTime = 0.00f;
    this->GravityScale = 1.00f;
    this->GroundFriction = 8.00f;
    this->JumpImpulse = 0.00f;
    this->bAbsoluteJumpImpulse = false;
    this->RootMotionMethod = ERootMotionVelocityMethod::RootMotionOnly;
    this->bUseExclusiveRootMotion = false;
    this->ConstrainToGround = false;
    this->UseHeadingAsAccelDirection = false;
    this->bAllowVerticalInputAcceleration = true;
    this->bForceDigitalInput = false;
}

