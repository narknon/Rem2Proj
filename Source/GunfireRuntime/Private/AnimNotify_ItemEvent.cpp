#include "AnimNotify_ItemEvent.h"

UAnimNotify_ItemEvent::UAnimNotify_ItemEvent() {
    this->ItemType = NULL;
    this->MustBeInHand = false;
    this->bIsModEvent = false;
    this->InvokeOnModSlot = -1;
    this->bStateTransient = false;
}

