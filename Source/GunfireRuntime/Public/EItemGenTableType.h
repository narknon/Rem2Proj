#pragma once
#include "CoreMinimal.h"
#include "EItemGenTableType.generated.h"

UENUM(BlueprintType)
enum class EItemGenTableType : uint8 {
    Standard,
    IndividualChance,
};

