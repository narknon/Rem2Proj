#include "DamageInfo.h"

FDamageInfo::FDamageInfo() {
    this->DamageType = NULL;
    this->Damage = 0.00f;
    this->AbsorbedDamage = 0.00f;
    this->DamageMod = 0.00f;
    this->DamageScalar = 0.00f;
    this->ImpactScalar = 0.00f;
    this->CritChance = 0.00f;
    this->CritDamageMod = 0.00f;
    this->WeakSpotDamageMod = 0.00f;
    this->PowerOverride = 0;
    this->DifficultyDamageScalar = 0.00f;
    this->UnmodifiedDamage = 0.00f;
    this->HealthDelta = 0.00f;
    this->SprayCount = 0;
    this->TotalSprayCount = 0;
    this->NoImpacts = false;
    this->SecondaryDamage = false;
    this->Critical = false;
    this->AllowsCrits = false;
    this->WeakSpot = false;
    this->AllowsWeakSpots = false;
    this->Resisted = false;
    this->HitLocationDestroyed = false;
    this->Wounded = false;
    this->Killed = false;
    this->Blockable = false;
    this->Evadable = false;
    this->Blocked = false;
    this->BlockCounter = false;
    this->Evaded = false;
    this->Spray = false;
    this->IgnoreRange = false;
    this->ConvertDamageToSecondaryHealthPool = false;
    this->Victims = 0;
}

