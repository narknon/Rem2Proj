#pragma once
#include "CoreMinimal.h"
#include "ButtonEvent.h"
#include "InputButtonEventDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FInputButtonEvent, const FName&, ButtonName, ButtonEvent, Event);

