#include "TraversalSettings.h"

UTraversalSettings::UTraversalSettings() {
    this->FeetPlantOffset = 60.00f;
    this->HandPlantOffset = 60.00f;
    this->HandAnimationOffset = -4.00f;
    this->BodyAnimationOffset = 0.00f;
    this->TestWallTraceDistanceDelta = 6.00f;
    this->bUseComplexCollisionWhenTestingForWalls = false;
    this->ValidWallAngleThreshold = 12.50f;
    this->FacingThreshold = 360.00f;
    this->LedgeGrabChannels.AddDefaulted(1);
    this->LedgeGrabStartOffset = 15.00f;
    this->LedgeGrabStopOffset = 145.00f;
    this->LedgeGrabCheckIncrement = 10.00f;
    this->LedgeGrabDistance = 60.00f;
    this->SolidTestWallPointDistance = 20.00f;
    this->InsetTestWallPointDistance = 40.00f;
    this->bLedgeGrabValidateEndingLocation = true;
    this->LedgeGrabEndingLocationMaxHeightDeviation = 25.00f;
    this->LedgeGrabBackwardsTraceScale = 0.20f;
    this->ClingDistance = 10.00f;
    this->ClingTestWallPointDistance = 9.00f;
    this->ClingHandOffset = 100.00f;
    this->WaterSurfaceAboveOffset = 87.50f;
    this->WaterSurfaceBelowOffset = 47.50f;
    this->WaterSurfaceEntryScaleZ = 0.33f;
    this->WaterSurfaceEntryMinVelocity = 50.00f;
    this->bWaterSurfaceEntryOnEmerge = true;
    this->EmergeAcceleration = 2000.00f;
    this->EmergeFullStrengthDepth = 100.00f;
    this->SubmergeDepth = 87.50f;
    this->SubmergeAcceleration = 2000.00f;
    this->DiveMinDistance = 2000.00f;
    this->DiveCastDistance = 3000.00f;
    this->DiveMinWaterDepth = 500.00f;
    this->ClimbingPhysicsCollisionChannels.AddDefaulted(1);
    this->ClimbingTraversalWindow = TEXT("Traversing");
}

