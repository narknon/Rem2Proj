#pragma once
#include "CoreMinimal.h"
#include "EParamApply.generated.h"

UENUM(BlueprintType)
enum class EParamApply : uint8 {
    ApplyOnAdd,
    ApplyOnRemove,
    ApplyOnAddAndReverseOnRemove,
};

