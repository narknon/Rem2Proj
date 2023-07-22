#pragma once
#include "CoreMinimal.h"
#include "PlayStateTransitionedEventDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FPlayStateTransitionedEvent, FName, StateName);

