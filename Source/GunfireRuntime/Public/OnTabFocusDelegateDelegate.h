#pragma once
#include "CoreMinimal.h"
#include "OnTabFocusDelegateDelegate.generated.h"

class UWidget;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnTabFocusDelegate, UWidget*, Tab, UWidget*, Panel);

