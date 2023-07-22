#include "DismountState.h"

UDismountState::UDismountState() {
    this->bNeedsInput = true;
    this->bValidateEndingLocation = true;
    this->bApplyGravity = false;
    this->FacingUnderGravity = CharacterFacing::Current;
    this->GravityScale = 1.00f;
    this->GravityDeceleration = 2000.00f;
}

