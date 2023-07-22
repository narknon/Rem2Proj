#pragma once
#include "CoreMinimal.h"
#include "OnTargetEventDelegate.generated.h"

class AActor;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnTargetEvent, AActor*, TargetingActor);

