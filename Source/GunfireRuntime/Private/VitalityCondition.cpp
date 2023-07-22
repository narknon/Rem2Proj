#include "VitalityCondition.h"

UVitalityCondition::UVitalityCondition() {
    this->Compare = CompareOp::GreaterThan;
    this->Value = 0.00f;
    this->Normalized = false;
}

