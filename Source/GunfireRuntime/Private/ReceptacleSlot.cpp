#include "ReceptacleSlot.h"

FReceptacleSlot::FReceptacleSlot() {
    this->ItemType = NULL;
    this->bFull = false;
    this->bCanAddItem = false;
    this->bCanRemoveItem = false;
    this->VisualInstance = NULL;
    this->SlottedType = NULL;
}

