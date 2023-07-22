#include "QuestTrigger.h"

bool AQuestTrigger::IsLocalPlayerInRegion() const {
    return false;
}

ATriggerVolume* AQuestTrigger::GetTriggerVolume() const {
    return NULL;
}

TArray<ARemnantCharacter*> AQuestTrigger::GetCharacters() {
    return TArray<ARemnantCharacter*>();
}

void AQuestTrigger::EvaluateOverlaps() {
}

AQuestTrigger::AQuestTrigger() {
    this->TriggerVolume = NULL;
    this->bUseManualCollision = false;
}

