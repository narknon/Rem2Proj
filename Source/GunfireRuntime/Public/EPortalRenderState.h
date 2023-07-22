#pragma once
#include "CoreMinimal.h"
#include "EPortalRenderState.generated.h"

UENUM(BlueprintType)
enum class EPortalRenderState : uint8 {
    Disabled,
    Enabled,
    EnabledNotRendered,
    EnabledNoRecursion,
};

