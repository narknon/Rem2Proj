#pragma once
#include "CoreMinimal.h"
#include "EventRegionCharacter.h"
#include "EventRegionPlayerDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FEventRegionPlayerDelegate, FEventRegionCharacter, Player);

