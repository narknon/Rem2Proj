#pragma once
#include "CoreMinimal.h"
#include "EAffiliation.generated.h"

UENUM(BlueprintType)
enum class EAffiliation : uint8 {
    SuperFriendly,
    Friendly,
    Neutral,
    Hostile,
    All,
};

