#include "DirectionalAnimData.h"

UDirectionalAnimData::UDirectionalAnimData() {
    this->Direction = 0.00f;
    this->VerticalDirection = 0.00f;
    this->Side = EDirectionSide::DontCare;
    this->Limb = 1;
    this->bAllowsBlending = true;
    this->LeftwardArc = 120.00f;
    this->RightwardArc = 120.00f;
    this->UpwardArc = 120.00f;
    this->DownwardArc = 120.00f;
    this->bOverrideFootBones = false;
    this->bEnableDistanceMatching = true;
    this->DistanceThreshold = 10.00f;
    this->DistanceMatchingCurveName = TEXT("DistanceCurve");
    this->bOverrideDistanceMatchingBoneName = false;
    this->bOverrideDistanceMatchingMaxStartTime = false;
    this->DistanceMatchingMaxStartTime = 0.00f;
    this->LeadDistanceScalar = 0.10f;
}

