#pragma once
#include "CoreMinimal.h"
#include "EventOnPawnUnpossessedDelegate.generated.h"

class AAIControllerGunfire;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FEventOnPawnUnpossessed, AAIControllerGunfire*, Controller);

