#pragma once
#include "CoreMinimal.h"
#include "ClimbableSurfaceResult.h"
#include "OnClimbSurfaceEventDelegate.generated.h"

class UClimbingComponent;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FOnClimbSurfaceEvent, UClimbingComponent*, ClimbingComponent, const FClimbableSurfaceResult&, Surface, bool, bIsInitialMount);

