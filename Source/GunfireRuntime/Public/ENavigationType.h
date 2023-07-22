#pragma once
#include "CoreMinimal.h"
#include "ENavigationType.generated.h"

UENUM(BlueprintType)
enum class ENavigationType : uint8 {
    Unknown,
    Ground,
    Air,
    Water,
};

