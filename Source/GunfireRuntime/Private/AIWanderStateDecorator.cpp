#include "AIWanderStateDecorator.h"

UAIWanderStateDecorator::UAIWanderStateDecorator() {
    this->WanderRangeMin = 100.00f;
    this->WanderRangeMax = 500.00f;
    this->AcceptanceRadius = 100.00f;
    this->OneShot = true;
    this->WaitTimeMin = 2.00f;
    this->WaitTimeMax = 5.00f;
}

