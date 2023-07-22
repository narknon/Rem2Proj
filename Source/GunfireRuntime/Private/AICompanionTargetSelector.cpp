#include "AICompanionTargetSelector.h"

UAICompanionTargetSelector::UAICompanionTargetSelector() {
    this->bIgnoreOutOfRangeTargets = false;
    this->CurrentTargetRangeTolerance = 0.00f;
    this->PlayerDistanceMaxPenalty = 0.75f;
    this->GrapplingEnemyBonusScore = 10.00f;
    this->bCullNeverVisibleTargets = false;
    this->PriorityTargetBonusRange = 0.00f;
    this->LowPriorityTargetConditions = NULL;
    this->LowPriorityTargetPenalty = 0.10f;
}

