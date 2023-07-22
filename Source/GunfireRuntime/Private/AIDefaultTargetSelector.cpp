#include "AIDefaultTargetSelector.h"

UAIDefaultTargetSelector::UAIDefaultTargetSelector() {
    this->CullNotVisibleTargets = false;
    this->WoundedAwarenessScalar = 0.10f;
    this->PlayerAwarenessScalar = 1.00f;
    this->bScoreUnknownTargets = false;
    this->TargetingConditions = NULL;
}

