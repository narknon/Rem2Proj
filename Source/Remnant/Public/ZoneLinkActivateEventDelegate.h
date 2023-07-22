#pragma once
#include "CoreMinimal.h"
#include "ZoneLinkActivateEventDelegate.generated.h"

class AActor;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FZoneLinkActivateEvent, AActor*, Waypoint);

