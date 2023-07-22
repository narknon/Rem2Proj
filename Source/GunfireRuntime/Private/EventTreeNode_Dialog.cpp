#include "EventTreeNode_Dialog.h"
#include "Dialog_Emote.h"
#include "Dialog_Speaker.h"

void UEventTreeNode_Dialog::Complete(UEventTreeComponent* Component) const {
}

UEventTreeNode_Dialog::UEventTreeNode_Dialog() {
    this->Speaker = UDialog_Speaker::StaticClass();
    this->Emote = UDialog_Emote::StaticClass();
    this->RemoveEmoteOnFinish = false;
    this->BlockInteractions = true;
    this->DialogLine = -1;
    this->VocalRange = NULL;
    this->IsDefaultSpeaker = true;
    this->IsDefaultVocalRange = true;
}

