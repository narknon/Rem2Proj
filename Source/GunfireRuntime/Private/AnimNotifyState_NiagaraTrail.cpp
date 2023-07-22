#include "AnimNotifyState_NiagaraTrail.h"

UAnimNotifyState_NiagaraTrail::UAnimNotifyState_NiagaraTrail() {
    this->SkeletalMeshPropertyName = TEXT("Actor");
    this->LifetimePropertyName = TEXT("Lifetime");
    this->Lifetime = 1.00f;
    this->bIsStateTransient = true;
    this->bSoftDestroy = true;
    this->OptimizationType = ENotifyOptimizationType::Queued;
    this->bShowInPreview = true;
    this->NiagaraComponent = NULL;
}

