#pragma once
#include "CoreMinimal.h"
#include "EActorModifierScope.generated.h"

UENUM(BlueprintType)
enum class EActorModifierScope : uint8 {
    StatsOnly,
    Server,
    ServerClient,
};

