#include "RangedWeaponData.h"

FRangedWeaponData::FRangedWeaponData() {
    this->Range = 0.00f;
    this->PrimaryFalloff = 0.00f;
    this->SecondaryFalloff = 0.00f;
    this->SprayCount = 0;
    this->Spread = 0.00f;
    this->MaxAmmo = 0;
    this->AmmoPerClip = 0;
    this->AmmoPerReload = 0;
    this->RateOfFire = 0.00f;
    this->BurstCount = 0;
    this->IsAutomatic = false;
    this->BurstRateOfFire = 0.00f;
    this->HasScope = false;
    this->ScopeFOV = 0.00f;
}

