#pragma once
#include "CoreMinimal.h"
#include "CompanionEventDelegate.generated.h"

class UCompanionComponent;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FCompanionEvent, UCompanionComponent*, Companion, bool, bAdded);

