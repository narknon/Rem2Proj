#pragma once
#include "CoreMinimal.h"
#include "ETechReqStatusChange.h"
#include "StatusEventMessageAddedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FStatusEventMessageAdded, ETechReqStatusChange, StatusChangeEvent);

