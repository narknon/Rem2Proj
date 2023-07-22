#pragma once
#include "CoreMinimal.h"
#include "InspectableEventDelegate.generated.h"

class UInspectableComponent;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FInspectableEvent, UInspectableComponent*, Component);

