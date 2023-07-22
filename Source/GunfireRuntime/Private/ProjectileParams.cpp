#include "ProjectileParams.h"

FProjectileParams::FProjectileParams() {
    this->Cause = NULL;
    this->OrientToTarget = false;
    this->bMaintainInitialRelativeRotation = false;
    this->Spread = 0.00f;
    this->IsSubProjectile = false;
    this->TargetActor = NULL;
    this->TargetLead = 0.00f;
    this->Speed = 0.00f;
    this->GravityScale = 0.00f;
    this->AutoArc = EAutoArcType::None;
    this->AutoArcHeight = 0.00f;
    this->bDeferred = false;
}

