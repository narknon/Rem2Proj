#pragma once
#include "CoreMinimal.h"
#include "ETraitProgressionType.generated.h"

UENUM(BlueprintType)
enum class ETraitProgressionType : uint8 {
    LegacyProgression,
    CharacterProgression,
};

