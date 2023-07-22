#include "EventTreeNode_ProximityTrigger.h"

UEventTreeNode_ProximityTrigger::UEventTreeNode_ProximityTrigger() {
    this->RangeMin = 0.00f;
    this->RangeMax = 500.00f;
    this->CooldownMin = 3.00f;
    this->CooldownMax = 5.00f;
    this->HasLOS = EYesNo::DontCare;
    this->InView = EYesNo::DontCare;
}

