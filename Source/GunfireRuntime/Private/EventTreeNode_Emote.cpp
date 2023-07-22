#include "EventTreeNode_Emote.h"
#include "Dialog_Emote.h"
#include "Dialog_Speaker.h"

UEventTreeNode_Emote::UEventTreeNode_Emote() {
    this->Speaker = UDialog_Speaker::StaticClass();
    this->TargetAllPlayers = false;
    this->Emote = UDialog_Emote::StaticClass();
}

