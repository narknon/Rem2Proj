#include "SequencerUIEventPayload.h"

FSequencerUIEventPayload::FSequencerUIEventPayload() {
    this->ElementIndex = 0;
    this->ChildWidgetToAdd = NULL;
    this->FadeInDuration = 0.00f;
    this->FadeOutDuration = 0.00f;
}

