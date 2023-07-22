#pragma once
#include "CoreMinimal.h"
#include "DissolveCompleteEventDelegate.generated.h"

class UDissolveComponent;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FDissolveCompleteEvent, UDissolveComponent*, Dissolve, bool, DissolvedOut);

