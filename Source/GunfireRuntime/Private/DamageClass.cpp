#include "DamageClass.h"

UDamageClass::UDamageClass() {
    this->bAllowsWeakSpots = true;
    this->bIgnoresWeakspotStatRequirement = false;
    this->DamageResistConstant = 0;
    this->DamageResistLevelScalar = 5;
    this->Action = NULL;
}

