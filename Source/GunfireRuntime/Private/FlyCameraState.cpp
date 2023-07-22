#include "FlyCameraState.h"

UFlyCameraState::UFlyCameraState() {
    this->PitchMin = -70.00f;
    this->PitchMax = 70.00f;
    this->PitchSpeed = 120.00f;
    this->YawSpeed = 240.00f;
    this->MoveSpeed = 256.00f;
    this->SprintSpeedScalar = 4.00f;
    this->StepFrameSimulateDelay = 0.33f;
    this->LastRequestedCameraActor = NULL;
    this->LastRequestedExternalCameraActor = NULL;
}

