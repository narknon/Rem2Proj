#include "ActorStateTransition.h"

UActorStateTransition::UActorStateTransition() {
    this->Enabled = true;
    this->bResetDestinationAnimationID = false;
    this->CachedState = NULL;
}

