#pragma once
#include "CoreMinimal.h"
#include "GameActivityRequestedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FGameActivityRequested, const FString&, ActivityId);

