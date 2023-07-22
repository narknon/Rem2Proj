#pragma once
#include "CoreMinimal.h"
#include "OnCinematicInstanceCompleteEventDelegate.generated.h"

class UCinematicInstance_Base;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnCinematicInstanceCompleteEvent, UCinematicInstance_Base*, Instance);

