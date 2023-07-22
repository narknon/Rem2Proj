#pragma once
#include "CoreMinimal.h"
#include "EDialogBeginMethod.generated.h"

UENUM(BlueprintType)
enum class EDialogBeginMethod : uint8 {
    AddDuplicates,
    AddIfNotOnTop,
    AddIfNotOnStack,
};

