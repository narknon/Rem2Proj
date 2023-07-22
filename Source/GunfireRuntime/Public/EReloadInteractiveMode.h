#pragma once
#include "CoreMinimal.h"
#include "EReloadInteractiveMode.generated.h"

UENUM(BlueprintType)
enum class EReloadInteractiveMode : uint8 {
    Actors,
    MashableActors,
    Items,
    Revive,
};

