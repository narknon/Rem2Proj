#include "ChargeCondition.h"

UChargeCondition::UChargeCondition() {
    this->Type = EVelocityType::Full;
    this->Threshold = 100.00f;
    this->bIgnoreTimeDilation = false;
}

