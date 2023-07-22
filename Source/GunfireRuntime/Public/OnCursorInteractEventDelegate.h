#pragma once
#include "CoreMinimal.h"
#include "ECursorInteractType.h"
#include "OnCursorInteractEventDelegate.generated.h"

class AActor;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnCursorInteractEvent, AActor*, CursorInteractActor, ECursorInteractType, CursorInteractEvent);

