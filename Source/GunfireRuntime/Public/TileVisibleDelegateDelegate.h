#pragma once
#include "CoreMinimal.h"
#include "TileVisibleDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FTileVisibleDelegate, int32, ID, bool, Visible);

