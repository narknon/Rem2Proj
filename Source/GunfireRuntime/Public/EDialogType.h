#pragma once
#include "CoreMinimal.h"
#include "EDialogType.generated.h"

UENUM(BlueprintType)
enum class EDialogType : uint8 {
    Default,
    DialogInterrupt,
    DialogOption,
};

