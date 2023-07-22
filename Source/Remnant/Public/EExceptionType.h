#pragma once
#include "CoreMinimal.h"
#include "EExceptionType.generated.h"

UENUM(BlueprintType)
enum class EExceptionType : uint8 {
    None,
    Add,
    Remove,
};

