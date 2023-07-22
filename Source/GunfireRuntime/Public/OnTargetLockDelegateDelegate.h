#pragma once
#include "CoreMinimal.h"
#include "OnTargetLockDelegateDelegate.generated.h"

class AActor;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnTargetLockDelegate, AActor*, Target);

