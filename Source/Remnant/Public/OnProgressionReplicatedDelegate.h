#pragma once
#include "CoreMinimal.h"
#include "OnProgressionReplicatedDelegate.generated.h"

class URemnantProgressionComponent;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnProgressionReplicated, URemnantProgressionComponent*, Progression);

