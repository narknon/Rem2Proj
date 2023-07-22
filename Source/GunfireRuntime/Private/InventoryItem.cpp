#include "InventoryItem.h"

FInventoryItem::FInventoryItem() {
    this->ID = 0;
    this->ItemBP = NULL;
    this->New = false;
    this->Favorited = false;
    this->Hidden = false;
    this->EquipmentSlotIndex = 0;
    this->InstanceData = NULL;
    this->EquippedActor = NULL;
}

