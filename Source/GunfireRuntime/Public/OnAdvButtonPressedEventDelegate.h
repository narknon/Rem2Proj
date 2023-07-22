#pragma once
#include "CoreMinimal.h"
#include "OnAdvButtonPressedEventDelegate.generated.h"

class UWidget;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnAdvButtonPressedEvent, UWidget*, Widget);

