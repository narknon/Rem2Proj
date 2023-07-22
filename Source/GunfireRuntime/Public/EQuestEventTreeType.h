#pragma once
#include "CoreMinimal.h"
#include "EQuestEventTreeType.generated.h"

UENUM(BlueprintType)
enum class EQuestEventTreeType : uint8 {
    Default,
    Interrupt,
    DialogOption,
};

