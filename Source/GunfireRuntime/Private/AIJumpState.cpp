#include "AIJumpState.h"

bool UAIJumpState::IsAIJumpComplete(UStateMachineComponent* StateMachine) {
    return false;
}

UAIJumpState::UAIJumpState() {
    this->Type = EJumpType::NavLink;
    this->DestinationOffset = 0.00f;
    this->LerpTime = 0.00f;
    this->ArcMethod = EAutoArcType::ArcHeight;
    this->ArcHeight = 100.00f;
    this->JumpSpeed = 1000.00f;
    this->LeadTarget = false;
    this->RequirePath = false;
    this->ValidateJump = false;
    this->LerpEaseIn = true;
    this->LerpEaseExponent = 2.00f;
    this->bLockPositionToArc = false;
}

