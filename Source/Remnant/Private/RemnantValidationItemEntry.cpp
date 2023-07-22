#include "RemnantValidationItemEntry.h"

URemnantValidationItemEntry::URemnantValidationItemEntry() {
    this->QuantityValidation = EQuantityValidationType::ValidateDecrease;
    this->LevelValidation = EQuantityValidationType::ValidateAnyChange;
    this->ValidateOverTimeOnly = false;
    this->ValidateQuantityOverTime = false;
    this->MaxQuantityChangeOverTime = 1;
    this->QuantityChangeTimeOutSeconds = 60;
}

