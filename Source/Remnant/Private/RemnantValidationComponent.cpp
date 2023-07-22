#include "RemnantValidationComponent.h"
#include "Templates/SubclassOf.h"

void URemnantValidationComponent::ValidateTraits(URemnantTraitsComponent* CachedTraits) {
}

void URemnantValidationComponent::ValidateProgression(URemnantProgressionComponent* CachedProgression) {
}

void URemnantValidationComponent::ValidateInventory(UInventoryComponent* CachedInventory) {
}

void URemnantValidationComponent::OnItemInstanceDataUpdate() {
}

void URemnantValidationComponent::ExceptionTimeOut() {
}

void URemnantValidationComponent::AddTraitException(TSubclassOf<UTrait> TraitBP, int32 LevelChange, bool bIsRemovingTrait) {
}

void URemnantValidationComponent::AddSoftTraitException(TSoftClassPtr<UTrait> SoftTraitBP, int32 LevelChange, bool bIsRemovingTrait) {
}

void URemnantValidationComponent::AddSoftItemException(TSoftClassPtr<AItem> SoftItemBP, int32 QuantityChange, int32 LevelChange) {
}

void URemnantValidationComponent::AddProgressionException(int32 LevelChange, int32 ExperienceChange) {
}

void URemnantValidationComponent::AddItemException(TSubclassOf<AItem> ItemBP, int32 QuantityChange, int32 LevelChange) {
}

void URemnantValidationComponent::AddEquipmentModException(int32 ModID, bool bIsEquipping) {
}

void URemnantValidationComponent::AddCraftingRecipeExceptions(const FRecipeInfo& RecipeInfo, int32 UpgradeItemID) {
}

URemnantValidationComponent::URemnantValidationComponent() {
    this->ValidationTable = NULL;
    this->ExceptionTimeOutSeconds = 30.00f;
    this->ValidationManager = NULL;
    this->LocalValidationPawn = NULL;
}

