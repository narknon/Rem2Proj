#pragma once
#include "CoreMinimal.h"
#include "GreyHealthDelegateDelegate.generated.h"

class UGreyHealthComponent;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FGreyHealthDelegate, UGreyHealthComponent*, Component);

