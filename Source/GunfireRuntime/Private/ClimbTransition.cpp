#include "ClimbTransition.h"

FClimbTransition::FClimbTransition() {
    this->RequiredInput = EClimbingTransitionRequiredInput::Any;
    this->MinimumMoveDistance = 0.00f;
    this->MinimumMoveAngle = 0.00f;
    this->MaximumMoveAngle = 0.00f;
}

