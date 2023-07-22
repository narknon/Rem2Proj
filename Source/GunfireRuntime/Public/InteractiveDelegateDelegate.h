#pragma once
#include "CoreMinimal.h"
#include "InteractiveDelegateDelegate.generated.h"

class AActor;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FInteractiveDelegate, const FName&, StateName, AActor*, Other);

