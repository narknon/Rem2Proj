#pragma once
#include "CoreMinimal.h"
#include "EInvincibleHandlingMethod.generated.h"

UENUM(BlueprintType)
enum class EInvincibleHandlingMethod : uint8 {
    DamageFails,
    ZeroDamage,
    LockHealth,
};

