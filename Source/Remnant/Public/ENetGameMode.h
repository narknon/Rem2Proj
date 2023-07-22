#pragma once
#include "CoreMinimal.h"
#include "ENetGameMode.generated.h"

UENUM(BlueprintType)
enum class ENetGameMode : uint8 {
    SinglePlayer,
    HostPublic,
    HostFriends,
    Join,
};

