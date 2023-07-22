#pragma once
#include "CoreMinimal.h"
#include "OnTargetPortalChangedEventDelegate.generated.h"

class APortal;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnTargetPortalChangedEvent, APortal*, NewTarget);

