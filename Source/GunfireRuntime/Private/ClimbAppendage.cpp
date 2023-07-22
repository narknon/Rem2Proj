#include "ClimbAppendage.h"

FClimbAppendage::FClimbAppendage() {
    this->bMandatoryForClimbing = false;
    this->AlphaPerSecond = 0.00f;
    this->MaxEffectorMoveSpeed = 0.00f;
    this->MaxEffectorRotationSpeed = 0.00f;
    this->EffectorResetBlendTime = 0.00f;
    this->Direction = EClimbDirectionBias::Right;
}

