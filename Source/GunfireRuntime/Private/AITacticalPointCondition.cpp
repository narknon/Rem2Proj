#include "AITacticalPointCondition.h"

UAITacticalPointCondition::UAITacticalPointCondition() {
    this->TacticalPointType = EAITacticalPointType::Invalid;
    this->Compare = CompareOp::LessThan;
    this->Range = 200.00f;
}

