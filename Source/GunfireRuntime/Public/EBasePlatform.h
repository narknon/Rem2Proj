#pragma once
#include "CoreMinimal.h"
#include "EBasePlatform.generated.h"

UENUM(BlueprintType)
enum class EBasePlatform : uint8 {
    Unknown,
    PC,
    Xbox,
    PlayStation,
};

