#include "SwimmingStateDecorator.h"

USwimmingStateDecorator::USwimmingStateDecorator() {
    this->Type = ESwimmingType::Surface;
    this->bClampZ = true;
    this->bHandleWaterEntry = true;
}

