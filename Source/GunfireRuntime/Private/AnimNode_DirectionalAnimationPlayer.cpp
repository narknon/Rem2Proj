#include "AnimNode_DirectionalAnimationPlayer.h"

FAnimNode_DirectionalAnimationPlayer::FAnimNode_DirectionalAnimationPlayer() {
    this->Direction = 0.00f;
    this->VerticalDirection = 0.00f;
    this->DirectionToTest = EDirectionalAnimationComponent::YawOnly;
    this->bApplyDistanceMatching = false;
    this->PlayRate = 0.00f;
}

