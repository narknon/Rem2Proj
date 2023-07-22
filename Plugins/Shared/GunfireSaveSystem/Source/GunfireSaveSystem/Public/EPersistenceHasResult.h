#pragma once
#include "CoreMinimal.h"
#include "EPersistenceHasResult.generated.h"

UENUM(BlueprintType)
enum class EPersistenceHasResult : uint8 {
    Empty,
    Exists,
    Corrupt,
    Unknown,
};

