#pragma once
#include "CoreMinimal.h"
#include "ESpawnType.generated.h"

UENUM(BlueprintType)
enum class ESpawnType : uint8 {
    All,
    Actor,
    Item,
    Character,
    UserDefined1,
    UserDefined2,
    UserDefined3,
    UserDefined4,
    UserDefined5,
    EncounterParams,
};

