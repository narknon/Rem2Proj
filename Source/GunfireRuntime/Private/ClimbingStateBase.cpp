#include "ClimbingStateBase.h"

UClimbingStateBase::UClimbingStateBase() {
    this->RotationSpeed = 180.00f;
    this->ClimbArc = 50.00f;
    this->MoveArc = 45.00f;
    this->PositionTolerance = 100.00f;
    this->DirectionalTolerance = 10.00f;
}

