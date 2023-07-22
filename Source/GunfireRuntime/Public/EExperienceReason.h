#pragma once
#include "CoreMinimal.h"
#include "EExperienceReason.generated.h"

UENUM(BlueprintType)
enum class EExperienceReason : uint8 {
    Default,
    Kill,
    Reward,
};

