#pragma once
#include "CoreMinimal.h"
#include "EventTreeTrackEventDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FEventTreeTrackEvent, FName, TriggerName);

