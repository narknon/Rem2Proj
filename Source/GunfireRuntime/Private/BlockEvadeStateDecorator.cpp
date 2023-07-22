#include "BlockEvadeStateDecorator.h"

void UBlockEvadeStateDecorator::SimulateDodge(const FDamageInfo& DamageInfo) {
}

UBlockEvadeStateDecorator::UBlockEvadeStateDecorator() {
    this->Evade = false;
    this->EvadeWindow = 0.44f;
    this->EvadeCounterWindow = 0.25f;
    this->bLock = false;
    this->BlockCounter = false;
    this->BlockArc = 120.00f;
    this->BlockCounterWindow = 0.25f;
    this->CounterAttackLockOut = 1.00f;
}

