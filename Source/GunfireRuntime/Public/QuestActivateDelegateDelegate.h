#pragma once
#include "CoreMinimal.h"
#include "QuestActivateDelegateDelegate.generated.h"

class UQuestComponent;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FQuestActivateDelegate, UQuestComponent*, Component);

