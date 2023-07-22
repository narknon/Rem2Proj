#pragma once
#include "CoreMinimal.h"
#include "EWoundedState.h"
#include "WoundedStateDelegateDelegate.generated.h"

class UWoundedComponent;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FWoundedStateDelegate, UWoundedComponent*, WoundedComponent, EWoundedState, State);

