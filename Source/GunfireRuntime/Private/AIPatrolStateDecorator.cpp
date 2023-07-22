#include "AIPatrolStateDecorator.h"

UAIPatrolStateDecorator::UAIPatrolStateDecorator() {
    this->AcceptanceRadius = 100.00f;
    this->StartPathAtNearestPoint = false;
    this->AllowPartialPath = false;
    this->PingPong = true;
    this->OverrideSpawnLocation = false;
    this->OverrideFacing = true;
}

