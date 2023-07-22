#include "GameRules.h"

float AGameRules::GetWeaponDamage(AActor* ItemOwner, AWeaponBase* Item, bool ApplyModifiers) {
    return 0.0f;
}

FDamageInfo AGameRules::GetDamageInfo(AActor* ItemOwner, AWeaponBase* Item) {
    return FDamageInfo{};
}

AGameRules::AGameRules() {
}

