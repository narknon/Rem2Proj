#pragma once
#include "CoreMinimal.h"
#include "GreyHealthDeltaDelegateDelegate.generated.h"

class UGreyHealthComponent;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FGreyHealthDeltaDelegate, UGreyHealthComponent*, Component, float, Delta);

