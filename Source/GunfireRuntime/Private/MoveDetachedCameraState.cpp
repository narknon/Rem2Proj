#include "MoveDetachedCameraState.h"

void UMoveDetachedCameraState::Snap(UStateCameraComponent* CameraComponent, bool UseInputDir) {
}

void UMoveDetachedCameraState::Rotate(float Angle) {
}

UMoveDetachedCameraState::UMoveDetachedCameraState() {
    this->FadeCharacterDistance = 100.00f;
    this->SnapOnExit = false;
    this->SnapWhenOutOfSight = false;
    this->SnapOnFOV = false;
    this->SnapOnFOVDelay = 0.50f;
    this->TurnSmooth = false;
    this->TurnRate = 90.00f;
    this->TurnIncrement = 45.00f;
    this->RoundToNearestIncrement = true;
    this->Follow = ECameraFollow::Stationary;
}

