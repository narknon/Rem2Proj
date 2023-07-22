#pragma once
#include "CoreMinimal.h"
#include "ItemSocketSlot.h"
#include "ItemSocketSlotEventDelegate.generated.h"

class UItemSocketComponent;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FItemSocketSlotEvent, UItemSocketComponent*, Component, const FItemSocketSlot&, Slot);

