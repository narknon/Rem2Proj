#pragma once
#include "CoreMinimal.h"
#include "UITweenFinishedEventDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FUITweenFinishedEvent, int32, TweenID);

