#pragma once
#include "CoreMinimal.h"
#include "ELODVolumeFilterType.generated.h"

UENUM(BlueprintType)
enum class ELODVolumeFilterType : uint8 {
    SubString,
    Class,
    Reference,
};

