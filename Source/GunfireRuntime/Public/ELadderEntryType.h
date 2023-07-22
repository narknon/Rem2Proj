#pragma once
#include "CoreMinimal.h"
#include "ELadderEntryType.generated.h"

UENUM(BlueprintType)
enum class ELadderEntryType : uint8 {
    BestApproch,
    BottomOnly,
    TopOnly,
};

