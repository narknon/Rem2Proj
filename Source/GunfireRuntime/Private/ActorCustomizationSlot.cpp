#include "ActorCustomizationSlot.h"

FActorCustomizationSlot::FActorCustomizationSlot() {
    this->PendingCustomization = NULL;
    this->CachedCustomization = NULL;
    this->IsTransient = false;
}

