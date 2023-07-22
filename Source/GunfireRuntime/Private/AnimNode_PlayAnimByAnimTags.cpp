#include "AnimNode_PlayAnimByAnimTags.h"

FAnimNode_PlayAnimByAnimTags::FAnimNode_PlayAnimByAnimTags() {
    this->bLoopAnimation = false;
    this->bApplyRootMotion = false;
    this->PlayRate = 0.00f;
    this->Sequence = NULL;
}

