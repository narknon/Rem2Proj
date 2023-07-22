#include "CombatClass.h"

UCombatClass::UCombatClass() {
    this->ComputedStats = NULL;
    this->Weight = 4;
    this->DefaultPressure = 3;
    this->AttackLockoutTime = 0.50f;
    this->bAlertOnSight = false;
    this->ResidualPressureDecay = 0.00f;
    this->MaxWeight = 12;
    this->MaxMeleePressure = 12;
    this->MaxRangedPressure = 12;
    this->Size = ECombatSize::Normal;
    this->MinInsiderTime = 5.00f;
    this->MaxInsiderTime = 10.00f;
    this->MaxOutsiderRange = 750.00f;
}

