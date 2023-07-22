#pragma once
#include "CoreMinimal.h"
#include "SplineFollowCompleteEventDelegate.generated.h"

class USplineFollowingComponent;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FSplineFollowCompleteEvent, USplineFollowingComponent*, Component);

