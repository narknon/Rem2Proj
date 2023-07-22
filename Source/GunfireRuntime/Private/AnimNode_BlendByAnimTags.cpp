#include "AnimNode_BlendByAnimTags.h"

FAnimNode_BlendByAnimTags::FAnimNode_BlendByAnimTags() {
    this->BlendType = EAlphaBlendOption::Linear;
    this->CustomBlendCurve = NULL;
    this->BlendProfile = NULL;
    this->LastActiveChildIndex = 0;
    this->bReinitializeOnBecomingRelevant = false;
    this->bResetOnActivation = false;
    this->bDynamicEvaluateActivePose = false;
}

