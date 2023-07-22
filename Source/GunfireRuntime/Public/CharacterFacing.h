#pragma once
#include "CoreMinimal.h"
#include "CharacterFacing.generated.h"

UENUM(BlueprintType)
enum class CharacterFacing : uint8 {
    MoveDir,
    Camera,
    Target,
    TargetOnly,
    TargetOnStart,
    ImpactDirOnStart,
    MoveDirOnStart,
    TargetOrMoveDirOnStart,
    TargetOrCameraOnStart,
    RootRotation,
    TargetOrNone,
    Fixed,
    MoveDirOnStartThenTarget,
    NavLinkDirection,
    Velocity,
    MoveDirForwardsOnly,
    DamageOwner,
    DamageOwnerOnStart,
    CameraOnStart,
    Current,
};

