#pragma once
#include "CoreMinimal.h"
#include "OnCursorTargetEventDelegate.generated.h"

class URemnantCursorTarget;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnCursorTargetEvent, URemnantCursorTarget*, CursorTarget);

