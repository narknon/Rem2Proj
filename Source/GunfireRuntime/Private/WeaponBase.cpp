#include "WeaponBase.h"

float AWeaponBase::GetProcChance() const {
    return 0.0f;
}

FImpactEffectDescriptor AWeaponBase::GetImpactEffect_Implementation() {
    return FImpactEffectDescriptor{};
}

float AWeaponBase::GetAttackSpeed() {
    return 0.0f;
}

void AWeaponBase::ComputeDamage(AActor* Actor, float& Damage, float& AttackRating) {
}

bool AWeaponBase::AttemptProc(float BonusChance) const {
    return false;
}

AWeaponBase::AWeaponBase() {
    this->DamageType = NULL;
}

