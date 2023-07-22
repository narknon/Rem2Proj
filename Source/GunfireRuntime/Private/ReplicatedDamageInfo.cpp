#include "ReplicatedDamageInfo.h"

FReplicatedDamageInfo::FReplicatedDamageInfo() {
    this->Cause = NULL;
    this->Target = NULL;
    this->Damage = 0.00f;
    this->AbsorbedDamage = 0.00f;
    this->Killed = false;
    this->Critical = false;
    this->WeakSpot = false;
    this->Resisted = false;
    this->DamageType = NULL;
}

