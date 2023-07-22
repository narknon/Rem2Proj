#pragma once
#include "CoreMinimal.h"
#include "GameViewportFocusDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FGameViewportFocusDelegate, bool, HasFocus);

