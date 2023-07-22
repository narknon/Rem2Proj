#pragma once
#include "CoreMinimal.h"
#include "EventTreeStage.h"
#include "EventTreeStageEventDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FEventTreeStageEvent, const FEventTreeStage&, Stage);

