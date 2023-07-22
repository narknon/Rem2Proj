#include "LandingPredictionCondition.h"
#include "LandingPredictionConditionParams_Default.h"

ULandingPredictionCondition::ULandingPredictionCondition() {
    this->Params = ULandingPredictionConditionParams_Default::StaticClass();
}

