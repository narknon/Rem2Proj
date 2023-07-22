#pragma once
#include "CoreMinimal.h"
#include "EPlayerJoinState.h"
#include "JoinStateChangedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FJoinStateChanged, EPlayerJoinState, NewState);

