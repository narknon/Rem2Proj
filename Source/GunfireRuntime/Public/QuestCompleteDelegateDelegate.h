#pragma once
#include "CoreMinimal.h"
#include "EQuestResult.h"
#include "QuestCompleteDelegateDelegate.generated.h"

class AQuest;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FQuestCompleteDelegate, AQuest*, Quest, EQuestResult, Result);

