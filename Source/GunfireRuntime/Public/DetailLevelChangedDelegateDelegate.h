#pragma once
#include "CoreMinimal.h"
#include "EDetailLevel.h"
#include "DetailLevelChangedDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_SPARSE_DELEGATE_OneParam(FDetailLevelChangedDelegate, EDetailLevel, DetailLevel);

