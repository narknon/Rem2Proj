#include "JumpState.h"
#include "CliffConditionParams_Default.h"

UJumpState::UJumpState() {
    this->Type = EJumpStateType::Impulse;
    this->CliffParams = UCliffConditionParams_Default::StaticClass();
    this->JumpDistance = 0.00f;
    this->LedgeEvent = TEXT("ReadyToJump");
    this->LandingParams = NULL;
    this->bDisableGravityUntilJumpImpulse = true;
}

