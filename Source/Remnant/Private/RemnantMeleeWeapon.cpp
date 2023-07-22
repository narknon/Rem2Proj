#include "RemnantMeleeWeapon.h"
#include "WeaponAffinityComponent.h"

ARemnantMeleeWeapon::ARemnantMeleeWeapon() {
    this->WeaponAffinity = CreateDefaultSubobject<UWeaponAffinityComponent>(TEXT("WeaponAffinity"));
    this->OverridePower2DamageType = NULL;
}

