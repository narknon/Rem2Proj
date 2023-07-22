#pragma once
#include "CoreMinimal.h"
#include "OnInputActionDelegateDelegate.generated.h"

class UWidget;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnInputActionDelegate, FName, Action, UWidget*, Widget);

