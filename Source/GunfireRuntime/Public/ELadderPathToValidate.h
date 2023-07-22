#pragma once
#include "CoreMinimal.h"
#include "ELadderPathToValidate.generated.h"

UENUM(BlueprintType)
enum class ELadderPathToValidate : uint8 {
    CurrentPath,
    NewPath,
    BestPath,
};

