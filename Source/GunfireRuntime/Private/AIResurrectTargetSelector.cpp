#include "AIResurrectTargetSelector.h"

UAIResurrectTargetSelector::UAIResurrectTargetSelector() {
    this->Type = EResurrectTargetType::Dead;
    this->bRequiresSight = true;
    this->DistanceThreshold = 500.00f;
    this->RevivingCharacterScorePenalty = 0.50f;
    this->bOnlyIfRevivable = false;
    this->OwnerExtraScore = 0.00f;
    this->TargetingConditions = NULL;
    this->NewTargetConditions = NULL;
}

