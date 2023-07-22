#pragma once
#include "CoreMinimal.h"
#include "QuestAIDirectorNamedEventDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FQuestAIDirectorNamedEvent, FName, EventName);

