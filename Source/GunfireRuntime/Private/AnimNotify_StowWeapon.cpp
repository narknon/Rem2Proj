#include "AnimNotify_StowWeapon.h"

UAnimNotify_StowWeapon::UAnimNotify_StowWeapon() {
    this->Weapon = NULL;
    this->Stowed = true;
    this->ApplyToInventory = false;
    this->bIsStateTransient = false;
}

