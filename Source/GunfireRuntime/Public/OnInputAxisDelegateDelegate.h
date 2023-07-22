#pragma once
#include "CoreMinimal.h"
#include "OnInputAxisDelegateDelegate.generated.h"

class UWidget;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FOnInputAxisDelegate, FName, AxisName, float, Value, UWidget*, Widget);

