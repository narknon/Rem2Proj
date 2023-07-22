#pragma once
#include "CoreMinimal.h"
#include "OnInventoryReplicatedDelegate.generated.h"

class UInventoryComponent;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnInventoryReplicated, UInventoryComponent*, Inventory);

