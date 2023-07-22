#pragma once
#include "CoreMinimal.h"
#include "PlayStateChangedEventDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FPlayStateChangedEvent, FName, PreviousState, FName, NewState);

