#pragma once
#include "CoreMinimal.h"
#include "ReceptacleEventDelegate.generated.h"

class UReceptacleComponent;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FReceptacleEvent, UReceptacleComponent*, Component);

