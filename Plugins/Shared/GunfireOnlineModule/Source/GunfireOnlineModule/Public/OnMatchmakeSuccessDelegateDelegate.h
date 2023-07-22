#pragma once
#include "CoreMinimal.h"
#include "FindSessionsCallbackProxy.h"
#include "ESessionSearchType.h"
#include "OnMatchmakeSuccessDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnMatchmakeSuccessDelegate, ESessionSearchType, SearchType, const TArray<FBlueprintSessionResult>&, Results);

