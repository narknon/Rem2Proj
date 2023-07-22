#include "ItemSocketSlot.h"

FItemSocketSlot::FItemSocketSlot() {
    this->ItemType = NULL;
    this->bShowItemInSocket = false;
    this->bFull = false;
    this->bCanAddItem = false;
    this->bCanRemoveItem = false;
    this->VisualInstance = NULL;
    this->SlottedType = NULL;
    this->bTransient = false;
}

