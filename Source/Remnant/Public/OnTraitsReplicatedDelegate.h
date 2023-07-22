#pragma once
#include "CoreMinimal.h"
#include "OnTraitsReplicatedDelegate.generated.h"

class URemnantTraitsComponent;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnTraitsReplicated, URemnantTraitsComponent*, Traits);

