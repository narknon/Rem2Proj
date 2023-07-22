#pragma once
#include "CoreMinimal.h"
#include "EAssetCachePreloadMethod.generated.h"

UENUM(BlueprintType)
enum class EAssetCachePreloadMethod : uint8 {
    OnGameInstanceInit,
    OnPostLogin,
    OnPostLoad,
    Blueprint,
};

