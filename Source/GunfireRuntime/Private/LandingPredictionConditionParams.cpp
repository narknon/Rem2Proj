#include "LandingPredictionConditionParams.h"

ULandingPredictionConditionParams::ULandingPredictionConditionParams() {
    this->CliffParams = NULL;
    this->IterationAngle = 0.00f;
    this->AdditionalIterations = 0;
    this->ForwardDistance = 500.00f;
    this->HeightTolerance = 25.00f;
    this->PlatformStartHeight = 50.00f;
    this->PlatformHeightCheckDistance = 100.00f;
    this->PlatformMaxHeightDelta = 50.00f;
    this->PlatformCapsuleRadiusScale = 1.00f;
}

