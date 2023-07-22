#pragma once
#include "CoreMinimal.h"
#include "EWeaponPhantomReplicationMode.generated.h"

UENUM(BlueprintType)
enum class EWeaponPhantomReplicationMode : uint8 {
    ServerAuthoritative,
    ClientAuthoritative,
};

