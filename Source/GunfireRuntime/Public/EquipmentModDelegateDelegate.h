#pragma once
#include "CoreMinimal.h"
#include "EquipmentModDelegateDelegate.generated.h"

class AEquipment;
class AEquipmentMod;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FEquipmentModDelegate, AEquipment*, Equipment, AEquipmentMod*, Mod);

