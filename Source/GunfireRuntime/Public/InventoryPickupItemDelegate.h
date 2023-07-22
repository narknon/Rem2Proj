#pragma once
#include "CoreMinimal.h"
#include "EItemNotifyReason.h"
#include "Templates/SubclassOf.h"
#include "InventoryPickupItemDelegate.generated.h"

class AItem;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_FourParams(FInventoryPickupItem, TSubclassOf<AItem>, ItemBP, int32, Quantity, int32, Level, EItemNotifyReason, Reason);

