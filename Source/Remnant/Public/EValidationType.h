#pragma once
#include "CoreMinimal.h"
#include "EValidationType.generated.h"

UENUM(BlueprintType)
enum class EValidationType : uint8 {
    Item,
    Trait,
    Progression,
};

