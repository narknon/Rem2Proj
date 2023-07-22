#pragma once
#include "CoreMinimal.h"
#include "ESpawnFrom.generated.h"

UENUM(BlueprintType)
enum class ESpawnFrom : uint8 {
    Random,
    Cardinal,
    Front,
    Behind,
};

