#include "InitialFacingDecorator.h"

UInitialFacingDecorator::UInitialFacingDecorator() {
    this->InitialFacing = EInitialFacing::MoveDir;
    this->FacingOffset = 0.00f;
    this->RotationTime = 0.20f;
    this->EasesIn = true;
    this->EaseExponent = 2.00f;
}

