#include "IsPushingCondition.h"

UIsPushingCondition::UIsPushingCondition() {
    this->bValidateState = false;
    this->bValidateMoveInput = false;
    this->Compare = CompareOp::GreaterThan;
    this->MoveInput = 0.10f;
    this->AlternateMovementMode = EYesNo::DontCare;
}

