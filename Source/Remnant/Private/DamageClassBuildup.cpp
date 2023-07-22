#include "DamageClassBuildup.h"

float UDamageClassBuildup::GetBuildupValue(const FDamageInfo& DamageInfo, float CurrentBuildup) const {
    return 0.0f;
}

UDamageClassBuildup::UDamageClassBuildup() {
    this->Method = EBuildupMethod::Damage;
    this->Value = 0.00f;
    this->Scale = 0.00f;
    this->Curve = NULL;
}

