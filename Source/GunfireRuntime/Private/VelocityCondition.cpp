#include "VelocityCondition.h"

UVelocityCondition::UVelocityCondition() {
    this->Type = EVelocityType::Full;
    this->Compare = CompareOp::GreaterThan;
    this->Value = 0.00f;
}

