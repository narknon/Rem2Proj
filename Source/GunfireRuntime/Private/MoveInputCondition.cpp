#include "MoveInputCondition.h"

UMoveInputCondition::UMoveInputCondition() {
    this->Compare = CompareOp::GreaterThan;
    this->Type = EMoveInputType::Full;
    this->Value = 0.00f;
    this->PersistValid = false;
    this->PersistNotValid = false;
}

