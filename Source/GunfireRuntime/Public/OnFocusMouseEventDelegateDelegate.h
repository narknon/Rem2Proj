#pragma once
#include "CoreMinimal.h"
#include "Input/Events.h"
#include "OnFocusMouseEventDelegateDelegate.generated.h"

class UWidget;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnFocusMouseEventDelegate, FPointerEvent, PointerEvent, UWidget*, Widget);

