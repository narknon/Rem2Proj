#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "OnClientExceptionAddedDelegateDelegate.generated.h"

class AItem;
class UInventoryComponent;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FOnClientExceptionAddedDelegate, UInventoryComponent*, Inventory, TSubclassOf<AItem>, ItemBP, int32, Quantity);

