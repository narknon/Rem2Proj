#pragma once
#include "CoreMinimal.h"
#include "EItemQuerySortMethod.generated.h"

UENUM(BlueprintType)
enum class EItemQuerySortMethod : uint8 {
    Unsorted,
    Sort,
    SortPrioritizeEquipped,
    SortPrioritizeHtLPrice,
    SortPrioritizeLtHPrice,
    NewFirst,
    Favorited,
};

