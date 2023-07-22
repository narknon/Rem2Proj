#include "EventTreeNode_SetCooldown.h"

UEventTreeNode_SetCooldown::UEventTreeNode_SetCooldown() {
    this->Context = TEXT("Owner");
    this->CooldownMin = 0.50f;
    this->CooldownMax = 1.50f;
}

