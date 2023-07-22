#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "ClimbableSurfaceResult.h"
#include "OnGrabClimbableSurfaceEventDelegate.generated.h"

class UClimbingComponent;
class USceneComponent;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_SixParams(FOnGrabClimbableSurfaceEvent, UClimbingComponent*, ClimbingComponent, const FClimbableSurfaceResult&, Surface, const FTransform&, PlantTransform, FName, Appendage, USceneComponent*, AttachComponent, FName, AttachSocket);

