#include "AIStrafeTargetStateDecorator.h"

UAIStrafeTargetStateDecorator::UAIStrafeTargetStateDecorator() {
    this->MinRadius = 100.00f;
    this->MaxRadius = 200.00f;
    this->MinOutsiderRadius = -1.00f;
    this->MaxOutsiderRadius = -1.00f;
    this->MinHeight = 60.00f;
    this->MaxHeight = 80.00f;
    this->MinOutsiderHeight = 60.00f;
    this->MaxOutsiderHeight = 80.00f;
    this->AcceptanceRadius = 100.00f;
    this->StopOnOverlap = true;
    this->OutOfRangeScalar = 2.00f;
}

