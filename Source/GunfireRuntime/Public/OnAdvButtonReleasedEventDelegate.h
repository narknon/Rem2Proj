#pragma once
#include "CoreMinimal.h"
#include "OnAdvButtonReleasedEventDelegate.generated.h"

class UWidget;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnAdvButtonReleasedEvent, UWidget*, Widget);

