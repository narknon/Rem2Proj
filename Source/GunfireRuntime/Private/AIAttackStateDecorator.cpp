#include "AIAttackStateDecorator.h"

UAIAttackStateDecorator::UAIAttackStateDecorator() {
    this->AttackType = EAttackType::AttackType_Melee;
    this->AttackPressure = -1;
    this->ValidatePressure = true;
}

