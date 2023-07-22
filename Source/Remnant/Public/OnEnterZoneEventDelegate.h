#pragma once
#include "CoreMinimal.h"
#include "OnEnterZoneEventDelegate.generated.h"

class APawn;
class AZoneActor;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnEnterZoneEvent, AZoneActor*, Zone, APawn*, PreviousPawn);

