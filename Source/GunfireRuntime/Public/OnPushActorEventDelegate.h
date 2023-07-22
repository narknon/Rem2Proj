#pragma once
#include "CoreMinimal.h"
#include "OnPushActorEventDelegate.generated.h"

class AActor;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnPushActorEvent, AActor*, Next, AActor*, Previous);

