#include "GunObstructionCondition.h"

UGunObstructionCondition::UGunObstructionCondition() {
    this->Type = EGunObstructionTypes::Default;
    this->bInObstructedState = false;
}

