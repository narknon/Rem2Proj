#pragma once
#include "CoreMinimal.h"
#include "EQuestComponentStatus.generated.h"

UENUM(BlueprintType)
enum class EQuestComponentStatus : uint8 {
    Unloaded,
    Loading,
    ChildrenLoading,
    Loaded,
};

