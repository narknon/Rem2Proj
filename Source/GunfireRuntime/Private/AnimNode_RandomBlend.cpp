#include "AnimNode_RandomBlend.h"

FAnimNode_RandomBlend::FAnimNode_RandomBlend() {
    this->bSwitchOnNewSeed = false;
    this->bSwitchAfterDuration = false;
    this->MinPlayDuration = 0.00f;
    this->MaxPlayDuration = 0.00f;
    this->NodeSeed = 0;
    this->CurrentPlayIndex = 0;
    this->NextUpdateDelay = 0.00f;
}

