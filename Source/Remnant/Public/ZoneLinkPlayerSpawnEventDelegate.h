#pragma once
#include "CoreMinimal.h"
#include "ZoneLinkPlayerSpawnEventDelegate.generated.h"

class ARemnantPlayerController;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FZoneLinkPlayerSpawnEvent, ARemnantPlayerController*, Player);

