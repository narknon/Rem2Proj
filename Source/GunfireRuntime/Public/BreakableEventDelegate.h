#pragma once
#include "CoreMinimal.h"
#include "BreakableEventDelegate.generated.h"

class UBreakableComponent;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FBreakableEvent, UBreakableComponent*, Breakable);

