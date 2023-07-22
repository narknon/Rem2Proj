#pragma once
#include "CoreMinimal.h"
#include "ESessionSearchType.h"
#include "OnMatchmakeDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnMatchmakeDelegate, ESessionSearchType, SearchType);

