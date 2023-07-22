#include "VariableConditionBase.h"

UVariableConditionBase::UVariableConditionBase() {
    this->VariableType = EBlackboardVariableType::Bool;
    this->Compare = CompareOp::GreaterThan;
    this->NumericValue = 0.00f;
    this->BooleanValue = true;
    this->ObjectType = NULL;
}

