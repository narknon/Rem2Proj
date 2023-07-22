#pragma once
#include "CoreMinimal.h"
#include "EMsgSeverity.generated.h"

UENUM(BlueprintType)
enum class EMsgSeverity : uint8 {
    Error,
    Warning,
    Info,
};

