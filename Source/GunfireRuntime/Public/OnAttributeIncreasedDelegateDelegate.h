#pragma once
#include "CoreMinimal.h"
#include "OnAttributeIncreasedDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnAttributeIncreasedDelegate, FName, AttributeID, int32, NewLevel);

