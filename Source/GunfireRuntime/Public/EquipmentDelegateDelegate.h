#pragma once
#include "CoreMinimal.h"
#include "EquipmentDelegateDelegate.generated.h"

class AEquipment;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FEquipmentDelegate, AEquipment*, Equipment);

