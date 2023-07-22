#include "ClampVelocityDecorator.h"

UClampVelocityDecorator::UClampVelocityDecorator() {
    this->bClampVerticalVelocity = true;
    this->MinVerticalVelocity = -400.00f;
    this->MaxVerticalVelocity = 400.00f;
    this->bClampHorizontalVelocity = true;
    this->Direction = EClampVelocityHorizontalDirection::Current;
    this->MinHorizontalVelocity = -400.00f;
    this->MaxHorizontalVelocity = 400.00f;
    this->bClampOnEntry = true;
    this->bClampOnExit = true;
    this->bClampOnUpdate = false;
}

