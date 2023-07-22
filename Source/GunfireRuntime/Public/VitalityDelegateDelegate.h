#pragma once
#include "CoreMinimal.h"
#include "VitalityDelegateDelegate.generated.h"

class UVitalityComponent;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FVitalityDelegate, UVitalityComponent*, Component);

