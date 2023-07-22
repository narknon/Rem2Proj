#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "InventoryInHandEventDelegate.generated.h"

class UItemType;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FInventoryInHandEvent, TSubclassOf<UItemType>, EquipmentInHand, TSubclassOf<UItemType>, Previous);

