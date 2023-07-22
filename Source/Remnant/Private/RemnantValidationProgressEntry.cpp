#include "RemnantValidationProgressEntry.h"

URemnantValidationProgressEntry::URemnantValidationProgressEntry() {
    this->ExperienceValidation = EQuantityValidationType::ValidateAnyChange;
    this->LevelValidation = EQuantityValidationType::ValidateAnyChange;
    this->ValidateExperienceOverTime = false;
    this->MaxExperienceChangeOverTime = 1;
    this->ExperienceChangeTimeOutSeconds = 60;
}

