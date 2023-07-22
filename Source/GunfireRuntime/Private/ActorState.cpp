#include "ActorState.h"

UActorState::UActorState() {
    this->IsSwitch = false;
    this->IsReentrant = false;
    this->IsInterruptible = false;
    this->InterruptPriority = -1;
    this->InterruptChance = 10;
}

