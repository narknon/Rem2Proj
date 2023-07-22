#include "ClimbingCameraState.h"

UClimbingCameraState::UClimbingCameraState() {
    this->SurfacePivotOffset = 0.00f;
    this->LeftRightExtraSmoothTime = 0.25f;
    this->MountingTime = 0.20f;
    this->SurfaceDirectionSmoothSpeed = 360.00f;
    this->DistanceZoomMinAngle = 60.00f;
    this->DistanceZoomMaxAngle = 90.00f;
    this->TurnAwayLeftRightOffset = 200.00f;
    this->TurnAwayBackwardsOffset = 100.00f;
    this->BackwardsOffsetMinAngle = 100.00f;
    this->BackwardsOffsetMaxAngle = 160.00f;
    this->DistanceZoomScalar = 0.25f;
    this->TurnAwayMinPitch = -90.00f;
    this->TurnAwayMaxPitch = 90.00f;
    this->TurnAwayMaxYaw = 120.00f;
    this->TurnAwayMaxYawResetTime = 0.50f;
    this->SideSwitchMinAngle = 30.00f;
    this->SideSwitchMaxAngle = 80.00f;
    this->TurnAwayLeftRightScale = 0.50f;
    this->ClimbingReorientToSurfaceScale = 0.50f;
    this->MountingReorientToSurfaceScale = 0.75f;
    this->bResetViewWhileTraversing = true;
    this->ResetViewDelay = 1.00f;
    this->PitchResetTime = 2.00f;
    this->YawResetTime = 2.00f;
    this->bResetViewWhileTurningAway = true;
    this->TurnAwayResetYaw = 95.00f;
    this->TurnAwayResetViewDelay = 1.00f;
    this->TurnAwayPitchResetTime = 2.00f;
    this->TurnAwayYawResetTime = 2.00f;
    this->CachedClimbingComponent = NULL;
}

