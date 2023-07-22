#pragma once
#include "CoreMinimal.h"
#include "ESessionSearchType.generated.h"

UENUM(BlueprintType)
enum class ESessionSearchType : uint8 {
    QuickMatch,
    Browse,
};

