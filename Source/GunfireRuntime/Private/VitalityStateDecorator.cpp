#include "VitalityStateDecorator.h"

UVitalityStateDecorator::UVitalityStateDecorator() {
    this->ValidateVitality = true;
    this->VitalityStartFrame = 0;
    this->VitalityOnStart = 0.00f;
    this->bClearRegenDelayOnStart = false;
    this->VitalityOnExit = 0.00f;
    this->VitalityLockFrame = 0;
    this->VitalityRegenDelay = 0.50f;
    this->VitalityRegenScalar = 1.00f;
}

