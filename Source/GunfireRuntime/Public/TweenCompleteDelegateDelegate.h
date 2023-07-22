#pragma once
#include "CoreMinimal.h"
#include "TweenCompleteDelegateDelegate.generated.h"

class UTweenComponent;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FTweenCompleteDelegate, UTweenComponent*, TweenComponent, int32, ID);

