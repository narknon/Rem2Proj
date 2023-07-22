#pragma once
#include "CoreMinimal.h"
#include "EAngleRef.generated.h"

UENUM(BlueprintType)
enum class EAngleRef : uint8 {
    Heading,
    MoveDir,
    InputDir,
    ToTargetDir,
    TacticalPointDir,
    ToTacticalPoint,
    CameraDir,
    WorldUp,
    Surface,
    ToFollowTarget,
};

