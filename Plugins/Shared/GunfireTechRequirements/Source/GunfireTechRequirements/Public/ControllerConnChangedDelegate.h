#pragma once
#include "CoreMinimal.h"
#include "ControllerConnChangedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FControllerConnChanged, bool, Connected);

