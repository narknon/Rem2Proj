#include "AITargetSwitchStateDecorator.h"

UAITargetSwitchStateDecorator::UAITargetSwitchStateDecorator() {
    this->Type = ETargetSwitchType::EventRegion;
    this->SelectionType = ETargetSelectionType::Random;
    this->CooldownEnabled = false;
    this->CooldownMin = 0.00f;
    this->CooldownMax = 1.00f;
}

