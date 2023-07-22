#pragma once
#include "CoreMinimal.h"
#include "OnTargetedDelegateDelegate.generated.h"

class AActor;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnTargetedDelegate, AActor*, Other);

