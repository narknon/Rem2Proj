#include "CameraState.h"

AActor* UCameraState::ValidateCameraActor_Implementation(UStateCameraComponent* CameraManager, AActor* CameraActor) {
    return NULL;
}




UCameraState::UCameraState() {
    this->FOV = 90.00f;
    this->DefaultBlendTime = 0.10f;
    this->CameraCollisionSweepOffset = 0.00f;
    this->CameraCollisionInterpSpeed = -1.00f;
}

