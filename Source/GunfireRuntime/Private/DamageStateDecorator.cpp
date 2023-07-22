#include "DamageStateDecorator.h"

UDamageStateDecorator::UDamageStateDecorator() {
    this->Damage = 0.00f;
    this->DamageMod = 0.00f;
    this->DamageScalar = 1.00f;
    this->DamageType = NULL;
    this->ImpactDirection = NULL;
}

