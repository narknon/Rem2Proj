#pragma once
#include "CoreMinimal.h"
#include "ENavAreaFlag.generated.h"

UENUM(BlueprintType)
enum class ENavAreaFlag : uint8 {
    Default,
    Jump,
    Fall,
    Ladder,
    LadderOff,
    Vault,
    VaultOn,
    VaultOnMid,
    VaultOnHigh,
    VaultOverMid,
    VaultOverHigh,
    Custom1,
    Custom2,
    Custom3,
    Custom4,
    MAX,
};

