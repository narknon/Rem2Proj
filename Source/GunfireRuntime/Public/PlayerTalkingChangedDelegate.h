#pragma once
#include "CoreMinimal.h"
#include "PlayerTalkingChangedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FPlayerTalkingChanged, bool, IsTalking);

