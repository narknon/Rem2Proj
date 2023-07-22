#pragma once
#include "CoreMinimal.h"
#include "ItemInventoryInteractionDelegateDelegate.generated.h"

class UInventoryComponent;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FItemInventoryInteractionDelegate, UInventoryComponent*, InventoryComponent);

