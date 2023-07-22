#include "AnimNode_CompositeBlendSpacePlayer.h"

FAnimNode_CompositeBlendSpacePlayer::FAnimNode_CompositeBlendSpacePlayer() {
    this->InitialX = 0.00f;
    this->InitialY = 0.00f;
    this->InitialZ = 0.00f;
    this->LoopingX = 0.00f;
    this->LoopingY = 0.00f;
    this->LoopingZ = 0.00f;
    this->InitialBlendSpace = NULL;
    this->LoopingBlendSpace = NULL;
    this->PlayRate = 0.00f;
    this->InitialBlendSpaceStopTime = 0.00f;
    this->LoopingBlendspaceStartTime = 0.00f;
    this->BlendType = EAlphaBlendOption::Linear;
    this->CustomBlendCurve = NULL;
    this->BlendProfile = NULL;
    this->BlendTime = 0.00f;
}

