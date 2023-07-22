#pragma once
#include "CoreMinimal.h"
#include "QuestManagerQuestObjectiveDelegateDelegate.generated.h"

class UQuestObjective;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FQuestManagerQuestObjectiveDelegate, UQuestObjective*, Objective);

