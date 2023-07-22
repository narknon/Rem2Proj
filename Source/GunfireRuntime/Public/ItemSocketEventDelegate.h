#pragma once
#include "CoreMinimal.h"
#include "ItemSocketEventDelegate.generated.h"

class UItemSocketComponent;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FItemSocketEvent, UItemSocketComponent*, Component);

