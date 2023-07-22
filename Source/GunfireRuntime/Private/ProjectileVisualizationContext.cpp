#include "ProjectileVisualizationContext.h"

FProjectileVisualizationContext::FProjectileVisualizationContext() {
    this->bIsValid = false;
    this->bWillHitTarget = false;
    this->TargetAffiliation = EAffiliation::SuperFriendly;
    this->ColorAlpha = 0.00f;
    this->bUsesTargetColors = false;
    this->ElapsedTime = 0.00f;
    this->ProjectileVisualization = NULL;
}

