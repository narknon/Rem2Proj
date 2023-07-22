#pragma once
#include "CoreMinimal.h"
#include "QuestNameDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FQuestNameDelegate, FName, NameID);

