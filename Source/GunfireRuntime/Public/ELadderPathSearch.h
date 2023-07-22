#pragma once
#include "CoreMinimal.h"
#include "ELadderPathSearch.generated.h"

UENUM(BlueprintType)
enum class ELadderPathSearch : uint8 {
    TARGET_ABOVE,
    TARGET_BELOW,
    ANY_PATH,
};

