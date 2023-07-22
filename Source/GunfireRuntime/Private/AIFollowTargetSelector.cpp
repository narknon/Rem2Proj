#include "AIFollowTargetSelector.h"

UAIFollowTargetSelector::UAIFollowTargetSelector() {
    this->DistanceThreshold = 500.00f;
    this->CurrentTargetWeight = 2.00f;
    this->HostWeightScalar = 4.00f;
}

