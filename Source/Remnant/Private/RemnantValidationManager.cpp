#include "RemnantValidationManager.h"

void URemnantValidationManager::QueueSoftTraitException(TSoftClassPtr<UTrait> SoftTraitBP, int32 LevelChange, bool bIsRemovingTrait) {
}

void URemnantValidationManager::QueueSoftItemException(TSoftClassPtr<AItem> SoftItemBP, int32 QuantityChange, int32 LevelChange) {
}

void URemnantValidationManager::QueueProgressionException(int32 LevelChange, int32 ExperienceChange) {
}

URemnantValidationManager* URemnantValidationManager::GetInstance(const UObject* WorldContextObject) {
    return NULL;
}

bool URemnantValidationManager::CanDoCheatValidation(AActor* ValidatedActor) {
    return false;
}

URemnantValidationManager::URemnantValidationManager() {
}

