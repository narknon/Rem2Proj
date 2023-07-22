#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "OnPickedUpUpgradedUniqueDelegate.generated.h"

class AItem;
class UInventoryComponent;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_FourParams(FOnPickedUpUpgradedUnique, UInventoryComponent*, Inventory, TSubclassOf<AItem>, ItemBP, int32, OldLevel, int32, NewLevel);

