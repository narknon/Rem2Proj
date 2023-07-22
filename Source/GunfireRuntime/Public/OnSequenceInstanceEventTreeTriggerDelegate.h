#pragma once
#include "CoreMinimal.h"
#include "OnSequenceInstanceEventTreeTriggerDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnSequenceInstanceEventTreeTrigger, FName, TriggerName);

