#include "TraversalState.h"

UTraversalState::UTraversalState() {
    this->bDisableCollisionOnEntry = true;
    this->bMaintainOverlaps = false;
    this->LerpTime = 0.25f;
    this->LerpEasesIn = true;
    this->LerpEaseExponent = 2.00f;
    this->bSetFallingMovementOnCollisionWindow = true;
    this->bZeroVelocityOnEntry = true;
    this->bAttachToSurface = false;
    this->bCollideWithSurface = true;
}

