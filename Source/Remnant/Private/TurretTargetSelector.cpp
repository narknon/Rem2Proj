#include "TurretTargetSelector.h"

UTurretTargetSelector::UTurretTargetSelector() {
    this->WeaponType = NULL;
    this->OptimalTargetRange = 1.00f;
    this->MaximumTargetRange = 1.00f;
    this->PriorityOptimalTargetRange = 1.00f;
    this->PriorityMaximumTargetRange = 1.00f;
    this->MaximumRangePenalty = 0.25f;
    this->AimArcMin = 30.00f;
    this->AimArcMax = 60.00f;
    this->OutOfArcPenalty = 0.80f;
    this->CurrentPriorityTargetBonus = 10.00f;
    this->PriorityTargetMaxBonusRange = 500.00f;
    this->PriorityTargetNoBonusRange = 2000.00f;
    this->PriorityTargetMaxProximityScalar = 2.00f;
}

