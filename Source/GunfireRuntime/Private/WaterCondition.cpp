#include "WaterCondition.h"

UWaterCondition::UWaterCondition() {
    this->SubmergeDepth = 0.00f;
    this->SubmergeDepthCompare = CompareOp::GreaterThan;
    this->WaterDepth = 0.00f;
    this->WaterDepthCompare = CompareOp::GreaterThan;
}

