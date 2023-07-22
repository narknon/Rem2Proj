#pragma once
#include "CoreMinimal.h"
#include "HealingInfo.h"
#include "HealingEventDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FHealingEventDelegate, const FHealingInfo&, HealingInfo);

