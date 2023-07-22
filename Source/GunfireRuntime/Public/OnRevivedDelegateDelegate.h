#pragma once
#include "CoreMinimal.h"
#include "OnRevivedDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnRevivedDelegate, bool, bSelfRevive);

