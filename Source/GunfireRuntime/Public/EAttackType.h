#pragma once
#include "CoreMinimal.h"
#include "EAttackType.generated.h"

UENUM(BlueprintType)
enum class EAttackType : uint8 {
    AttackType_None,
    AttackType_Melee,
    AttackType_Ranged,
    AttackType_MAX UMETA(Hidden),
};

