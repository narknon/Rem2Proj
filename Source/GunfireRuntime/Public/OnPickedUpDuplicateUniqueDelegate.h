#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "OnPickedUpDuplicateUniqueDelegate.generated.h"

class AItem;
class UInventoryComponent;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnPickedUpDuplicateUnique, UInventoryComponent*, Inventory, TSubclassOf<AItem>, ItemBP);

