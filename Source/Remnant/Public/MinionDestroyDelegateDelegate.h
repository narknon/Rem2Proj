#pragma once
#include "CoreMinimal.h"
#include "MinionDestroyDelegateDelegate.generated.h"

class UMinionComponent;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FMinionDestroyDelegate, UMinionComponent*, Component);

