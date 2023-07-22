#include "DamageTakenCondition.h"

UDamageTakenCondition::UDamageTakenCondition() {
    this->DamageWindow = 0.00f;
    this->MinDamagePercent = 0.00f;
    this->MaxDamagePercent = 100.00f;
    this->bIgnoreImpactScalar = false;
    this->ReferenceAngle = 0.00f;
    this->Arc = 180.00f;
}

