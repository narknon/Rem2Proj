#pragma once
#include "CoreMinimal.h"
#include "OnRemoveCursorTargetDelegate.generated.h"

class URemnantCursorTarget;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnRemoveCursorTarget, URemnantCursorTarget*, CursorTarget);

