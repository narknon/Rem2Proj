#pragma once
#include "CoreMinimal.h"
#include "Types/SlateEnums.h"
#include "OnNavigationDelegateDelegate.generated.h"

class UWidget;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnNavigationDelegate, EUINavigation, Direction, UWidget*, Widget);

