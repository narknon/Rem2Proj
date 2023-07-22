#pragma once
#include "CoreMinimal.h"
#include "OnWaitDialogDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnWaitDialog, bool, Show);

