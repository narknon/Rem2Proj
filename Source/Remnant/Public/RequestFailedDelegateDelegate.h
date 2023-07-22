#pragma once
#include "CoreMinimal.h"
#include "RequestFailedDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FRequestFailedDelegate, int32, ErrorCode);

