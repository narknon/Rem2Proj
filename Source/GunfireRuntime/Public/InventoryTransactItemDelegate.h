#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "InventoryTransactItemDelegate.generated.h"

class AItem;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FInventoryTransactItem, TSubclassOf<AItem>, ItemBP, int32, Quantity, bool, DidTransactionSucceed);

