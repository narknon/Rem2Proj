#pragma once
#include "CoreMinimal.h"
#include "StateChangeDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FStateChangeDelegate, const FName&, StateName, const FName&, PreviousStateName);

