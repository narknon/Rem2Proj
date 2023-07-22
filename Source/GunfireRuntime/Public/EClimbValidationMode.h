#pragma once
#include "CoreMinimal.h"
#include "EClimbValidationMode.generated.h"

UENUM(BlueprintType)
enum class EClimbValidationMode : uint8 {
    RootMotion,
    ActorOrientation,
};

