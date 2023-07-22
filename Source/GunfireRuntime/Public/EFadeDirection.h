#pragma once
#include "CoreMinimal.h"
#include "EFadeDirection.generated.h"

UENUM(BlueprintType)
enum class EFadeDirection : uint8 {
    FD_In,
    FD_Out,
    FD_MAX UMETA(Hidden),
};

