#pragma once
#include "CoreMinimal.h"
#include "QuestObjectiveDelegateDelegate.generated.h"

class UQuestObjective;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FQuestObjectiveDelegate, UQuestObjective*, Objective);

