#pragma once
#include "CoreMinimal.h"
#include "EQuestResult.generated.h"

UENUM(BlueprintType)
enum class EQuestResult : uint8 {
    Success,
    Failure,
};

