#pragma once
#include "CoreMinimal.h"
#include "OnHudEventDelegateDelegate.generated.h"

class UObject;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnHudEventDelegate, FName, EventID, UObject*, Context);

