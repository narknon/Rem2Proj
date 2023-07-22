#include "StateInfo.h"

FStateInfo::FStateInfo() {
    this->IsInteractive = false;
    this->InteractiveHost = EInteractiveHost::Us;
    this->InteractiveState = EInteractiveResult::NoResult;
    this->InteractiveOther = NULL;
    this->InteractiveMashValue = 0.00f;
}

