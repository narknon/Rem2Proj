#include "InViewCondition.h"

UInViewCondition::UInViewCondition() {
    this->CheckAllPlayers = EYesNo::No;
    this->MaxDistance = 5000.00f;
    this->ActorBoundsScale = 1.00f;
}

