#include "CameraEffect.h"

FCameraEffect::FCameraEffect() {
    this->ParticleSystem = NULL;
    this->Duration = 0.00f;
    this->Channel = 0;
    this->AutoActivate = false;
    this->SoftDestroy = false;
    this->HandleID = 0;
    this->SpawnedParticleComponent = NULL;
    this->DeterminedViewTarget = NULL;
}

