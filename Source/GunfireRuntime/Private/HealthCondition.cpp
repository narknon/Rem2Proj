#include "HealthCondition.h"

UHealthCondition::UHealthCondition() {
    this->Compare = CompareOp::GreaterThan;
    this->Value = 0.00f;
    this->Normalized = true;
}

