#pragma once
#include "CoreMinimal.h"
#include "RemnantQuestReward.h"
#include "QuestRewardDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FQuestRewardDelegate, FRemnantQuestReward, Reward);

