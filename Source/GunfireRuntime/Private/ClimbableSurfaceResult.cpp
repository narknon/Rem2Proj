#include "ClimbableSurfaceResult.h"

FClimbableSurfaceResult::FClimbableSurfaceResult() {
    this->Animation = NULL;
    this->ClimbableSpline = NULL;
    this->AttachComponent = NULL;
    this->Weight = 0.00f;
    this->SplineInputKey = 0.00f;
    this->Divergence = 0.00f;
    this->MoveDistance = 0.00f;
    this->MoveAngle = 0.00f;
    this->bContinuous = false;
    this->bUseLeadingPosition = false;
    this->BlendTimeOverride = 0.00f;
    this->bIsInitialClimb = false;
}

