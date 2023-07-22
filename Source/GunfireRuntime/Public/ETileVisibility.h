#pragma once
#include "CoreMinimal.h"
#include "ETileVisibility.generated.h"

UENUM(BlueprintType)
enum class ETileVisibility : uint8 {
    None,
    Visible,
    NotVisible,
};

