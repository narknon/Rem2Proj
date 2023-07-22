#include "RangeToTargetCondition.h"

URangeToTargetCondition::URangeToTargetCondition() {
    this->bIgnoreSoftTarget = false;
    this->bEdgeToEdge = true;
    this->RangeMin = 0.00f;
    this->RangeMax = 300.00f;
    this->HeightDiff = -1.00f;
    this->bHeightEdgeToEdge = false;
    this->AngleRef = 0.00f;
    this->Arc = 180.00f;
    this->VisState = EVisState::DontCare;
    this->HasDirectPath = EYesNo::DontCare;
    this->HasLOS = EYesNo::DontCare;
    this->HasSphereLOS = EYesNo::DontCare;
    this->HasLOF = EYesNo::DontCare;
    this->InView = EYesNo::DontCare;
}

