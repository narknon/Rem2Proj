#pragma once
#include "CoreMinimal.h"
#include "EOnlineActivityOutcomeBP.generated.h"

UENUM(BlueprintType)
enum class EOnlineActivityOutcomeBP : uint8 {
    Completed,
    Failed,
    Cancelled,
};

