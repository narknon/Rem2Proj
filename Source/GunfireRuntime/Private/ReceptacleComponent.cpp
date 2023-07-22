#include "ReceptacleComponent.h"
#include "Templates/SubclassOf.h"

void UReceptacleComponent::RequestReturnItemToInventory_Implementation(ACharacterGunfire* Subject) {
}
bool UReceptacleComponent::RequestReturnItemToInventory_Validate(ACharacterGunfire* Subject) {
    return true;
}

void UReceptacleComponent::RequestAddItemFromInventoryById_Implementation(UInventoryComponent* Inventory, int32 ItemId) {
}
bool UReceptacleComponent::RequestAddItemFromInventoryById_Validate(UInventoryComponent* Inventory, int32 ItemId) {
    return true;
}

void UReceptacleComponent::RequestAddItemFromInventoryByClass_Implementation(UInventoryComponent* Inventory, TSubclassOf<AItem> ItemClass) {
}
bool UReceptacleComponent::RequestAddItemFromInventoryByClass_Validate(UInventoryComponent* Inventory, TSubclassOf<AItem> ItemClass) {
    return true;
}

void UReceptacleComponent::RequestAddItemFromInventory_Implementation(ACharacterGunfire* Subject) {
}
bool UReceptacleComponent::RequestAddItemFromInventory_Validate(ACharacterGunfire* Subject) {
    return true;
}

void UReceptacleComponent::RemoveItem_Implementation(const int32 SlotID) {
}

bool UReceptacleComponent::IsValid_Implementation(TSubclassOf<AItem> ItemClass, const FReceptacleSlot& Slot) const {
    return false;
}

bool UReceptacleComponent::IsFull() const {
    return false;
}

bool UReceptacleComponent::IsEmpty() const {
    return false;
}

bool UReceptacleComponent::HasInteractableSlot() const {
    return false;
}

TArray<FReceptacleSlot> UReceptacleComponent::GetSlots() {
    return TArray<FReceptacleSlot>();
}

bool UReceptacleComponent::CanAddItemOfClass(TSubclassOf<AItem> ItemClass) const {
    return false;
}

void UReceptacleComponent::AddItem_Implementation(const int32 SlotID, TSubclassOf<AItem> ItemClass) {
}

UReceptacleComponent::UReceptacleComponent() {
    this->Blocked = false;
}

