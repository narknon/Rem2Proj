#pragma once
#include "CoreMinimal.h"
#include "QuestZonePlayerDelegateDelegate.generated.h"

class ARemnantPlayerController;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FQuestZonePlayerDelegate, ARemnantPlayerController*, Controller);

