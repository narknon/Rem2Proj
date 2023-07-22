#pragma once
#include "CoreMinimal.h"
#include "EMatchmakingFailure.h"
#include "ESessionSearchType.h"
#include "OnMatchmakeFailDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnMatchmakeFailDelegate, ESessionSearchType, SearchType, EMatchmakingFailure, Reason);

