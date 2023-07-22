#pragma once
#include "CoreMinimal.h"
#include "OnAdvButtonClickedEventDelegate.generated.h"

class UWidget;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnAdvButtonClickedEvent, UWidget*, Widget);

