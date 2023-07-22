#include "EventTree.h"
#include "Dialog_Speaker.h"

UEventTree::UEventTree() {
    this->DefaultSpeaker = UDialog_Speaker::StaticClass();
    this->MultiInteractionNode = NULL;
    this->DefaultVocalRange = NULL;
    this->NextUniqueId = 0;
}

