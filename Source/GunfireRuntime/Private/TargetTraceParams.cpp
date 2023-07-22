#include "TargetTraceParams.h"

FTargetTraceParams::FTargetTraceParams() {
    this->ClosenessToBoundsCenterWeight = 0.00f;
    this->DistanceFromTraceOriginWeight = 0.00f;
    this->BestTargetScorePadding = 0.00f;
    this->bStickyTarget = false;
    this->bCalculateSnapTarget = false;
    this->MaxSnapAngle = 0.00f;
}

