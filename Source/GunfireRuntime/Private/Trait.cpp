#include "Trait.h"
#include "Templates/SubclassOf.h"

bool UTrait::ShouldApplyStats_Implementation() {
    return false;
}

bool UTrait::HasModifier(TSubclassOf<UActorModifier> ModifierBP) {
    return false;
}

float UTrait::GetTraitStatValue(FName StatName, int32 TraitLevel) {
    return 0.0f;
}

void UTrait::GetModifierBonus(TSubclassOf<UActorModifier> ModifierBP, int32 FromLevel, int32 ToLevel, int32& LevelBonus, int32& MaxLevelBonus) {
}

UTrait::UTrait() {
    this->Type = NULL;
    this->StatTable = NULL;
    this->MaxLevel = 1;
    this->bAddIfAlreadyUnlocked = false;
    this->SubsequentUnlockLevelIncrement = 1;
    this->RequiredLevel = 0;
    this->Cost = 1;
    this->ConditionList = NULL;
    this->RequiredEntitlement = NULL;
}

