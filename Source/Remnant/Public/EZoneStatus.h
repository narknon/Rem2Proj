#pragma once
#include "CoreMinimal.h"
#include "EZoneStatus.generated.h"

UENUM(BlueprintType)
enum class EZoneStatus : uint8 {
    Unloaded,
    Loading,
    LoadingDynamicResources,
    LoadingDynamicSubResources,
    WaitingForServerLoading,
    WaitingForServer,
    Loaded,
    Failed,
};

