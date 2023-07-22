#include "IsClimbingCondition.h"

UIsClimbingCondition::UIsClimbingCondition() {
    this->IsTraversing = EYesNo::DontCare;
    this->IsContinuousClimb = EYesNo::DontCare;
    this->IsSurfaceTransition = EYesNo::DontCare;
    this->ValidateSurface = EYesNo::DontCare;
    this->ValidateInput = EYesNo::DontCare;
    this->MaximumInputAngle = 45.00f;
    this->ValidateFacing = EYesNo::DontCare;
    this->FacingTolerance = 30.00f;
}

