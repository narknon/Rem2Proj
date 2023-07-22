#pragma once
#include "CoreMinimal.h"
#include "ZoneManagerZoneChangeDelegateDelegate.generated.h"

class AZoneActor;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FZoneManagerZoneChangeDelegate, AZoneActor*, Zone);

