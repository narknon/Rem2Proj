#include "AnimNotifyState_WeaponPhantom.h"

UAnimNotifyState_WeaponPhantom::UAnimNotifyState_WeaponPhantom() {
    this->Shapes.AddDefaulted(1);
    this->CauseIsWeaponInHand = false;
    this->Cause = NULL;
    this->ImpactDirection = NULL;
    this->DamageType = NULL;
    this->DamageMod = 0.00f;
    this->DamageScalar = 1.00f;
    this->Unblockable = false;
    this->Blockable = true;
    this->Evadable = true;
    this->GroupPriority = 0;
    this->PowerOverride = -1;
    this->HitCooldown = -1.00f;
    this->bPersistentCooldown = false;
    this->EffectSpawnDirection = EEffectSpawnDirection::ImpactNormal;
    this->PhantomType = EWeaponPhantomType::Dynamic;
    this->DiscretePhantomFPS = 90.00f;
    this->bIncludeRootMotion = true;
    this->bCacheDiscreteAnimation = true;
}

