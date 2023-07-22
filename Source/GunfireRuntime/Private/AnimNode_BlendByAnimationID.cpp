#include "AnimNode_BlendByAnimationID.h"

FAnimNode_BlendByAnimationID::FAnimNode_BlendByAnimationID() {
    this->bReinitializeOnBecomingRelevant = false;
    this->BlendType = EAlphaBlendOption::Linear;
}

