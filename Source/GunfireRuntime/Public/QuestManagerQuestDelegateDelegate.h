#pragma once
#include "CoreMinimal.h"
#include "QuestManagerQuestDelegateDelegate.generated.h"

class AQuest;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FQuestManagerQuestDelegate, AQuest*, Quest);

