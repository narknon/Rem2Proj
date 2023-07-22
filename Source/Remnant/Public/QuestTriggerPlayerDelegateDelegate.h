#pragma once
#include "CoreMinimal.h"
#include "QuestTriggerPlayerDelegateDelegate.generated.h"

class ARemnantCharacter;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FQuestTriggerPlayerDelegate, ARemnantCharacter*, Player);

