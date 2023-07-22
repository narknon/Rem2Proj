#include "HitReactionState.h"

UHitReactionState::UHitReactionState() {
    this->Enabled = true;
    this->Type = HitReactionType::Impact;
    this->HitResult = EHitResult::Hit;
    this->ReferenceAngle = 0.00f;
    this->Arc = 180.00f;
    this->IgnoreNoImpact = false;
    this->OnlyIfBlocked = false;
    this->SetLastHitReactionTimeOnExit = true;
    this->MinPower = 0;
    this->MaxPower = 10;
    this->DamageScalar = 1.00f;
    this->DamageWindow = 0.00f;
    this->MinDamagePercent = 0.00f;
    this->MaxDamagePercent = 100.00f;
    this->DamageAccumulationScalar = 1.00f;
    this->bIgnoreImpactScalar = false;
    this->IgnoreMPHealthScaling = false;
}

