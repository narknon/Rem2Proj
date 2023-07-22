#pragma once
#include "CoreMinimal.h"
#include "StateEventDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FStateEventDelegate, const FName&, StateName);

