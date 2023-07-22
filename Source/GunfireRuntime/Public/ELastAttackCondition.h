#pragma once
#include "CoreMinimal.h"
#include "ELastAttackCondition.generated.h"

UENUM(BlueprintType)
enum class ELastAttackCondition : uint8 {
    AttackHitCharacter,
    AttackHitEnvironment,
    AttackWasBlocked,
    AttackWasBlockCountered,
    AttackWasEvaded,
};

