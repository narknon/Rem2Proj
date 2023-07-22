#pragma once
#include "CoreMinimal.h"
#include "InventoryResult.h"
#include "InventoryAddedItemDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_OneParam(FInventoryAddedItem, const FInventoryResult&, Result);

