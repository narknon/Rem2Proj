#pragma once
#include "CoreMinimal.h"
#include "ClimbableSurfaceResult.h"
#include "OnClimbableSurfaceChangedEventDelegate.generated.h"

class UClimbingComponent;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FOnClimbableSurfaceChangedEvent, UClimbingComponent*, ClimbingComponent, const FClimbableSurfaceResult&, NewSurface, const FClimbableSurfaceResult&, PreviousSurface);

