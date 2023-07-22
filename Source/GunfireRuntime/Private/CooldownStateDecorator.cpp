#include "CooldownStateDecorator.h"

UCooldownStateDecorator::UCooldownStateDecorator() {
    this->Type = ECooldownType::Named;
    this->Scope = ECooldownScope::Local;
    this->Action = ECooldownAction::SetCooldown;
    this->ValidateCooldown = true;
    this->CooldownMin = 0.50f;
    this->CooldownMax = 1.50f;
}

