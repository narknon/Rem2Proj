#pragma once
#include "CoreMinimal.h"
#include "InteractiveInfoDelegateDelegate.generated.h"

class AActor;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FInteractiveInfoDelegate, AActor*, Actor, FName, InteractiveState);

