#include "RemnantAnimInstance.h"

URemnantAnimInstance::URemnantAnimInstance() {
    this->bIsStopped = false;
    this->bIsJogging = false;
    this->bIsSprinting = false;
    this->bIsMovingForward = true;
    this->bNoLookPose = false;
    this->JogRef = 1.00f;
    this->SprintRef = 400.00f;
    this->bComputeMoveDirection = false;
    this->MoveForwardRef = 0.01f;
    this->bNeedsLookPose = false;
    this->NoLookPoseTag = TEXT("NoLookPoses");
}

