#pragma once
#include "CoreMinimal.h"
#include "ELevelContextFallback.generated.h"

UENUM(BlueprintType)
enum class ELevelContextFallback : uint8 {
    Instigator,
    Root,
    WorldContext,
    Owner,
};

