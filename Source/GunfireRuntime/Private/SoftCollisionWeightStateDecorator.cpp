#include "SoftCollisionWeightStateDecorator.h"

USoftCollisionWeightStateDecorator::USoftCollisionWeightStateDecorator() {
    this->SoftCollisionWeight = 0.00f;
    this->bShouldRestorePreviousWeight = true;
}

