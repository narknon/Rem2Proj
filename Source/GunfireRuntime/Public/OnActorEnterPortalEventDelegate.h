#pragma once
#include "CoreMinimal.h"
#include "OnActorEnterPortalEventDelegate.generated.h"

class AActor;
class APortal;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnActorEnterPortalEvent, AActor*, Actor, APortal*, TargetPortal);

