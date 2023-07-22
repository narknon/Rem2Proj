#pragma once
#include "CoreMinimal.h"
#include "EventRegionCharacterDelegateDelegate.generated.h"

class ACharacterGunfire;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FEventRegionCharacterDelegate, ACharacterGunfire*, Actor);

