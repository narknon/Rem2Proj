#pragma once
#include "CoreMinimal.h"
#include "EYesNo.generated.h"

UENUM(BlueprintType)
enum class EYesNo : uint8 {
    Yes,
    No,
    DontCare,
};

