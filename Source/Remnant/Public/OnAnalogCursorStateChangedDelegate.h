#pragma once
#include "CoreMinimal.h"
#include "OnAnalogCursorStateChangedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnAnalogCursorStateChanged, bool, CursorActive);

