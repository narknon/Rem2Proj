#pragma once
#include "CoreMinimal.h"
#include "ClimbableSurfaceResult.h"
#include "OnDismountSurfaceEventDelegate.generated.h"

class UClimbingComponent;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnDismountSurfaceEvent, UClimbingComponent*, ClimbingComponent, const FClimbableSurfaceResult&, Dismount);

