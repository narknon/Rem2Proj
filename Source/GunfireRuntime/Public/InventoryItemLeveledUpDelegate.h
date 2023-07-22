#pragma once
#include "CoreMinimal.h"
#include "InventoryItemLeveledUpDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FInventoryItemLeveledUp, int32, ItemId);

