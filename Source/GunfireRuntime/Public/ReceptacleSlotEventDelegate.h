#pragma once
#include "CoreMinimal.h"
#include "ReceptacleSlot.h"
#include "ReceptacleSlotEventDelegate.generated.h"

class UReceptacleComponent;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FReceptacleSlotEvent, UReceptacleComponent*, Component, const FReceptacleSlot&, Slot);

