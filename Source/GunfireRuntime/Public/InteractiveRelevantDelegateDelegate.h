#pragma once
#include "CoreMinimal.h"
#include "HudInteractive.h"
#include "InteractiveRelevantDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FInteractiveRelevantDelegate, FHudInteractive, Interactive);

