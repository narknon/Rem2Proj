#pragma once
#include "CoreMinimal.h"
#include "OnCursorPanelEventDelegate.generated.h"

class URemnantCursorPanel;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnCursorPanelEvent, URemnantCursorPanel*, CursorPanel);

