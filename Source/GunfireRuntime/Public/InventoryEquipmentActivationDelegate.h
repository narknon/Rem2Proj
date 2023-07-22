#pragma once
#include "CoreMinimal.h"
#include "InventoryEquipmentActivationDelegate.generated.h"

class AEquipment;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FInventoryEquipmentActivation, AEquipment*, Equipment);

