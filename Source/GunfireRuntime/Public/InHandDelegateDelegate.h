#pragma once
#include "CoreMinimal.h"
#include "InHandDelegateDelegate.generated.h"

class AEquipment;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FInHandDelegate, AEquipment*, Equipment, bool, InHand);

