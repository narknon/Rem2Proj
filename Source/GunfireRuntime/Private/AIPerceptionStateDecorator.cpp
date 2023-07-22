#include "AIPerceptionStateDecorator.h"

UAIPerceptionStateDecorator::UAIPerceptionStateDecorator() {
    this->PerceptionScalar = 1.00f;
    this->HearingScalar = 1.00f;
    this->SightRange = 3000.00f;
    this->LostSightRange = 4000.00f;
    this->SightAngle = 180.00f;
    this->bRestoreOnExit = false;
}

