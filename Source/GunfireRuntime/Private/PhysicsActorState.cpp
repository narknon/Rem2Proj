#include "PhysicsActorState.h"

FPhysicsActorState::FPhysicsActorState() {
    this->SpeedRef = 0.00f;
    this->PhysicalMaterialOverride = NULL;
    this->MassScale = 0.00f;
    this->LinearDamping = 0.00f;
    this->AngularDamping = 0.00f;
    this->DamageType = NULL;
    this->WeaponPhantomHorizontalInflation = 0.00f;
    this->WeaponPhantomVerticalInflation = 0.00f;
    this->WeaponPhantomVerticalOffset = 0.00f;
    this->WeaponPhantomForwardOffset = 0.00f;
}

