#pragma once
#include "CoreMinimal.h"
#include "ECursorOverType.h"
#include "OnCursorOverEventDelegate.generated.h"

class AActor;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnCursorOverEvent, AActor*, CursorOverActor, ECursorOverType, CursorOverEvent);

