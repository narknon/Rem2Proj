#include "RemnantValidationTraitEntry.h"

URemnantValidationTraitEntry::URemnantValidationTraitEntry() {
    this->TraitValidation = ETraitValidationType::ValidateOnRemove;
    this->LevelValidation = EQuantityValidationType::ValidateAnyChange;
}

