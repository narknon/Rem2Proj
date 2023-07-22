#include "UIPFInteractor.h"

UUIPFInteractor::UUIPFInteractor() {
    this->bLimitTickRate = false;
    this->TickRate = 30.00f;
    this->bInteractWithGrass = true;
    this->fGrassInteractionDiameter = 85.00f;
    this->bOverrideInteractorActivationDistance = false;
    this->InteractorActivationDistance = 20000.00f;
    this->bPerCompVelocity = false;
    this->bForceFixedInteractionStrength = false;
    this->FixedStrength = 600.00f;
    this->EnablePhysicsInteraction = false;
    this->PhysicsActivationRadius = 200.00f;
    this->PhysicsDeactivationRadius = 400.00f;
}

