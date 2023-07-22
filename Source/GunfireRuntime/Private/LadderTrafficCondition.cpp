#include "LadderTrafficCondition.h"

ULadderTrafficCondition::ULadderTrafficCondition() {
    this->TrafficType = ELadderTrafficType::All;
    this->Compare = CompareOp::GreaterThan;
    this->LadderParams = NULL;
    this->Value = 0.00f;
}

