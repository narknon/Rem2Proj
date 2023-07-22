#pragma once
#include "CoreMinimal.h"
#include "EQuestCreationStatus.generated.h"

UENUM(BlueprintType)
enum class EQuestCreationStatus : uint8 {
    AwatingCreation,
    CreatingChildren,
    Finished,
};

