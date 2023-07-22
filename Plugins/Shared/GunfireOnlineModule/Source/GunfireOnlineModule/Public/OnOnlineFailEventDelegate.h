#pragma once
#include "CoreMinimal.h"
#include "EGunfireOnlineEvent.h"
#include "OnOnlineFailEventDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnOnlineFailEvent, EGunfireOnlineEvent, OnlineFailEvent);

