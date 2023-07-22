#pragma once
#include "CoreMinimal.h"
#include "DialogEventDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FDialogEvent, FName, EventName);

