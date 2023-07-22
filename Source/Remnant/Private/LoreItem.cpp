#include "LoreItem.h"

void ALoreItem::LoreNotify(UObject* WorldContextObject, const FLorePage& Page) {
}

ALoreItem::ALoreItem() {
    this->AutoOpenUI = false;
    this->OverrideHideReadUI = false;
}

