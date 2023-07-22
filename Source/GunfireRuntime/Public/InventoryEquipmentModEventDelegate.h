#pragma once
#include "CoreMinimal.h"
#include "InventoryEquipmentModEventDelegate.generated.h"

class AEquipment;
class AEquipmentMod;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FInventoryEquipmentModEvent, AEquipment*, Equipment, AEquipmentMod*, Mod);

