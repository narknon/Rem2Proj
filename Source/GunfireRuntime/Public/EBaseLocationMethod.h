#pragma once
#include "CoreMinimal.h"
#include "EBaseLocationMethod.generated.h"

UENUM(BlueprintType)
enum class EBaseLocationMethod : uint8 {
    CapsuleBase,
    MeshBase,
    MeshCenter,
};

