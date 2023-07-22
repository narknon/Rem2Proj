#pragma once
#include "CoreMinimal.h"
#include "EPIESelectionGender.generated.h"

UENUM(BlueprintType)
enum class EPIESelectionGender : uint8 {
    Male,
    Female,
    Random,
    None,
};

