#include "RemnantQuestReward.h"

FRemnantQuestReward::FRemnantQuestReward() {
    this->RewardType = ERemnantQuestRewardType::Quest;
    this->Quest = NULL;
    this->Experience = 0;
    this->bAutoEquip = false;
    this->bSkipDuplicates = false;
    this->bIsArchetype = false;
    this->bSaveOnAward = false;
}

