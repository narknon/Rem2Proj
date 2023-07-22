#include "StaminaStateDecorator.h"

UDEPRECATED_StaminaStateDecorator::UDEPRECATED_StaminaStateDecorator() {
    this->ValidateStamina = true;
    this->StaminaStartFrame = 0;
    this->StaminaOnStart = 0.00f;
    this->StaminaOnExit = 0.00f;
    this->StaminaPerSec = 0.00f;
    this->StaminaLockFrame = 0;
    this->StaminaRegenDelay = 0.50f;
    this->StaminaRegenScalar = 1.00f;
}

