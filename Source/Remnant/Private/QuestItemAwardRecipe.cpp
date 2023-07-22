#include "QuestItemAwardRecipe.h"

UQuestItemAwardRecipe::UQuestItemAwardRecipe() {
    this->RewardType = ERemnantQuestRewardType::SharedPickup;
    this->AwardLevel = 0;
    this->AwardQuantity = 1;
    this->bAutoEquip = false;
    this->bSkipDuplicates = false;
    this->bWantsSaveOnAward = false;
}

