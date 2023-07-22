#include "EditorTickableActor.h"


AEditorTickableActor::AEditorTickableActor() {
    this->IsTickableInGame = false;
    this->TickEditorInterval = 1.00f;
    this->TickEditorDelta = 1.00f;
}

