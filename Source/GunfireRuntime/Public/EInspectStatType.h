#pragma once
#include "CoreMinimal.h"
#include "EInspectStatType.generated.h"

UENUM(BlueprintType)
enum class EInspectStatType : uint8 {
    Standard,
    Modifier,
    PerSecond,
    Scalar,
    Seconds,
    Requirement,
    Affinity,
    Custom,
    Bar,
};

