#pragma once
#include "CoreMinimal.h"
#include "PhysicsTweenEventDelegate.generated.h"

class UPrimitiveComponent;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FPhysicsTweenEvent, int32, TweenID, UPrimitiveComponent*, Primitive);

