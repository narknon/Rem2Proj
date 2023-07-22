#pragma once
#include "CoreMinimal.h"
#include "OnShieldDeltaDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnShieldDeltaDelegate, float, CurrentValue);

