#include "EnvQueryTest_Cover.h"

UEnvQueryTest_Cover::UEnvQueryTest_Cover() {
    this->WeaponType = NULL;
    this->UseLastKnownPosition = false;
    this->OptimalDistance = 2500.00f;
    this->TooCloseFactor = 2.00f;
    this->TravelDistanceFactor = 0.50f;
    this->CurrentPointFactor = 0.75f;
    this->TargetHeightDiffFactor = 2.00f;
    this->MinDistanceFromCurrentPoint = 500.00f;
    this->MinAngleDiff = 0.00f;
    this->MaxAngleDiff = 60.00f;
    this->AngleDiffFactor = -1.00f;
    this->CoverBufferRadius = 100.00f;
    this->CoverBufferFactor = 2.00f;
}

