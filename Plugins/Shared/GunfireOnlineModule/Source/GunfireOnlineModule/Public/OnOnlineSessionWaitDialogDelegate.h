#pragma once
#include "CoreMinimal.h"
#include "OnOnlineSessionWaitDialogDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnOnlineSessionWaitDialog, bool, Show);

