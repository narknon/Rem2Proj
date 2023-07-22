#include "AIMoveForwardStateDecorator.h"

UAIMoveForwardStateDecorator::UAIMoveForwardStateDecorator() {
    this->bIgnorePlayerInput = true;
    this->InputThreshold = 0.10f;
    this->KeepVelocityOnEnter = false;
}

