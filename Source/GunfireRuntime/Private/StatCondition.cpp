#include "StatCondition.h"

UStatCondition::UStatCondition() {
    this->Compare = CompareOp::GreaterThan;
    this->Value = 0.00f;
    this->ApplyModifiers = false;
}

