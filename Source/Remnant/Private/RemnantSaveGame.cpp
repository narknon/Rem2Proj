#include "RemnantSaveGame.h"

float URemnantSaveGame::GetSavedTimePlayed() const {
    return 0.0f;
}

float URemnantSaveGame::GetCurrentTimePlayed(UObject* WorldContextObject) {
    return 0.0f;
}

URemnantSaveGame::URemnantSaveGame() {
    this->NewGame = true;
    this->HasMainCampaign = false;
    this->LastActiveRootSlot = -1;
    this->ZoneIDGen = 1;
    this->QuestIDGen = 1;
    this->TimePlayed = 0.00f;
}

