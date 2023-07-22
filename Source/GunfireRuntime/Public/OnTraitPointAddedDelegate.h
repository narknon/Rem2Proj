#pragma once
#include "CoreMinimal.h"
#include "OnTraitPointAddedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnTraitPointAdded, int32, CurrentTraitPoints);

