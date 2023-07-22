#include "AIDistanceCondition.h"

UAIDistanceCondition::UAIDistanceCondition() {
    this->Type = EAIDistanceType::XY;
    this->Compare = CompareOp::LessThanEqual;
    this->Distance = 300.00f;
    this->TwoDimensional = true;
}

