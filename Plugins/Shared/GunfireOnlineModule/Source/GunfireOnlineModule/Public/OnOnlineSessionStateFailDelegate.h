#pragma once
#include "CoreMinimal.h"
#include "OnOnlineSessionStateFailDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnOnlineSessionStateFail, const FName&, FailedState);

