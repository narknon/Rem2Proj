#pragma once
#include "CoreMinimal.h"
#include "EBlackboardVariableType.generated.h"

UENUM(BlueprintType)
enum class EBlackboardVariableType : uint8 {
    Object,
    Class,
    Int,
    Float,
    Bool,
    String,
    Name,
};

