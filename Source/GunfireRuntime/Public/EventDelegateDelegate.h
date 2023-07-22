#pragma once
#include "CoreMinimal.h"
#include "EventDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FEventDelegate, FName, EventName);

