#pragma once
#include "CoreMinimal.h"
#include "EquipmentTrackEventDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FEquipmentTrackEvent, FName, TriggerName);

