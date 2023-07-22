#pragma once
#include "CoreMinimal.h"
#include "EActorContext.generated.h"

UENUM(BlueprintType)
enum class EActorContext : uint8 {
    Actor,
    Owner,
    Target,
    Weapon,
};

