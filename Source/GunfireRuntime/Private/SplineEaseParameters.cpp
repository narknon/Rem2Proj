#include "SplineEaseParameters.h"

FSplineEaseParameters::FSplineEaseParameters() {
    this->EaseType = ESplineEaseType::NoEase;
    this->bUseLinearEase = false;
    this->EaseOverTime = 0.00f;
    this->NormalizedSpeedOverTimeCurve = NULL;
}

