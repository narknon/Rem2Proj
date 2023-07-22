#pragma once
#include "CoreMinimal.h"
#include "ZoneTravelState.h"
#include "OnZoneTravelStateChangedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnZoneTravelStateChanged, FZoneTravelState, ZoneTravelState);

