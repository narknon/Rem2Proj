#pragma once
#include "CoreMinimal.h"
#include "EClimbAnimationType.generated.h"

UENUM(BlueprintType)
enum class EClimbAnimationType : uint8 {
    Generic,
    Start,
    Stop,
    Loop,
};

