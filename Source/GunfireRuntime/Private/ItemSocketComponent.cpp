#include "ItemSocketComponent.h"
#include "Net/UnrealNetwork.h"
#include "Templates/SubclassOf.h"

void UItemSocketComponent::RequestReturnItemToInventory_Implementation(ACharacterGunfire* Subject) {
}
bool UItemSocketComponent::RequestReturnItemToInventory_Validate(ACharacterGunfire* Subject) {
    return true;
}

void UItemSocketComponent::RequestPickupAndEquip_Implementation(ACharacterGunfire* Subject, bool bSetInHand) {
}
bool UItemSocketComponent::RequestPickupAndEquip_Validate(ACharacterGunfire* Subject, bool bSetInHand) {
    return true;
}

void UItemSocketComponent::RequestDetach_Implementation() {
}
bool UItemSocketComponent::RequestDetach_Validate() {
    return true;
}

void UItemSocketComponent::RequestAddItemFromInventoryById_Implementation(UInventoryComponent* Inventory, int32 ItemId) {
}
bool UItemSocketComponent::RequestAddItemFromInventoryById_Validate(UInventoryComponent* Inventory, int32 ItemId) {
    return true;
}

void UItemSocketComponent::RequestAddItemFromInventoryByClass_Implementation(UInventoryComponent* Inventory, TSubclassOf<AItem> ItemClass) {
}
bool UItemSocketComponent::RequestAddItemFromInventoryByClass_Validate(UInventoryComponent* Inventory, TSubclassOf<AItem> ItemClass) {
    return true;
}

void UItemSocketComponent::RequestAddItemFromInventory_Implementation(ACharacterGunfire* Subject) {
}
bool UItemSocketComponent::RequestAddItemFromInventory_Validate(ACharacterGunfire* Subject) {
    return true;
}

void UItemSocketComponent::RequestAddExistingItem_Implementation(AItem* Item) {
}
bool UItemSocketComponent::RequestAddExistingItem_Validate(AItem* Item) {
    return true;
}

void UItemSocketComponent::RemoveItem_Implementation() {
}

void UItemSocketComponent::OnRep_SocketedItem() {
}

bool UItemSocketComponent::IsValid_Implementation(TSubclassOf<AItem> ItemClass) const {
    return false;
}

bool UItemSocketComponent::IsFull() const {
    return false;
}

bool UItemSocketComponent::IsEmpty() const {
    return false;
}

bool UItemSocketComponent::HasInteractableSlot() const {
    return false;
}

void UItemSocketComponent::ForceFill() {
}

bool UItemSocketComponent::CanAddItemOfClass(TSubclassOf<AItem> ItemClass) const {
    return false;
}

void UItemSocketComponent::AddItem_Implementation(TSubclassOf<AItem> ItemClass) {
}

void UItemSocketComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UItemSocketComponent, SocketedItem);
}

UItemSocketComponent::UItemSocketComponent() {
    this->Blocked = false;
    this->SocketedItem = NULL;
}

