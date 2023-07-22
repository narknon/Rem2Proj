#pragma once
#include "CoreMinimal.h"
#include "TileActiveDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FTileActiveDelegate, int32, ID, bool, Active);

