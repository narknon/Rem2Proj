#pragma once
#include "CoreMinimal.h"
#include "RelevantActor.h"
#include "RelevantActorEventDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FRelevantActorEvent, const FRelevantActor&, RelevantActor);

