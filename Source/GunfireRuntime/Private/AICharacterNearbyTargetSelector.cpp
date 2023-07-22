#include "AICharacterNearbyTargetSelector.h"

UAICharacterNearbyTargetSelector::UAICharacterNearbyTargetSelector() {
    this->Range = 300.00f;
    this->CurrentTargetScalar = 2.00f;
    this->CurrentTargetRangeScalar = 1.50f;
    this->bIgnoreCooldownForCurrentTarget = false;
}

