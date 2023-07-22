#pragma once
#include "CoreMinimal.h"
#include "ComputeStatsExtDelegateDelegate.generated.h"

class AActor;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FComputeStatsExtDelegate, AActor*, Actor);

