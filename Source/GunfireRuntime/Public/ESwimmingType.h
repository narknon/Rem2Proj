#pragma once
#include "CoreMinimal.h"
#include "ESwimmingType.generated.h"

UENUM(BlueprintType)
enum class ESwimmingType : uint8 {
    Surface,
    Underwater,
    None,
};

