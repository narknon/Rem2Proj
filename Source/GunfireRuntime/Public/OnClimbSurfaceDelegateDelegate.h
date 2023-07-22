#pragma once
#include "CoreMinimal.h"
#include "ClimbableSurfaceResult.h"
#include "OnClimbSurfaceDelegateDelegate.generated.h"

class UClimbingComponent;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_ThreeParams(FOnClimbSurfaceDelegate, UClimbingComponent*, ClimbingComponent, const FClimbableSurfaceResult&, Surface, bool, bIsInitialMount);

