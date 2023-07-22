#include "ParticleCustomization.h"

UParticleCustomization::UParticleCustomization() {
    this->Attached = false;
    this->ApplyToAllMeshes = false;
    this->TrySoftDestroy = true;
    this->bIsStateTransient = false;
    this->bStateSoftDestroy = true;
}

