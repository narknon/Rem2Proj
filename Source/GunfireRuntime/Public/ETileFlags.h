#pragma once
#include "CoreMinimal.h"
#include "ETileFlags.generated.h"

UENUM(BlueprintType)
enum class ETileFlags : uint8 {
    AllowSpawns = 0x1,
    AllowQuests,
    NoNavValidate = 0x4,
    AllFlags = 0xFF,
};

