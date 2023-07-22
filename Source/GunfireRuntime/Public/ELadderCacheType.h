#pragma once
#include "CoreMinimal.h"
#include "ELadderCacheType.generated.h"

UENUM(BlueprintType)
enum class ELadderCacheType : uint8 {
    NotCached,
    TransitionCache,
    DescriptorCache,
};

