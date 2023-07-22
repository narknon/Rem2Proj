#include "CliffConditionParams.h"

UCliffConditionParams::UCliffConditionParams() {
    this->CliffCheckIterations = 1;
    this->bUseMoveInputDirection = true;
    this->MinimumInputStrength = 0.10f;
    this->bUseVelocityDirection = true;
    this->MinimumVelocity = 0.00f;
    this->DirectionAngleOffset = 0.00f;
    this->GroundCheckHorizontalDistance = 5.00f;
    this->GroundCheckVerticalDistance = 70.00f;
    this->MinimumCliffHeight = 35.00f;
    this->CliffHeightSweepRadius = 10.00f;
    this->CliffHeightIterationDistance = 20.00f;
    this->bOnlyIfNotWalkable = false;
    this->WallCheckMethod = ECliffWallCheckMethod::LeftRight;
    this->WallCheckDistance = 100.00f;
    this->MinimumWallCheckDistanceFromCliffPosition = 0.00f;
    this->WallCheckHeightOffset = 25.00f;
    this->WallCheckSlideAngle = 30.00f;
}

