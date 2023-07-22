#pragma once
#include "CoreMinimal.h"
#include "ELastHostType.generated.h"

UENUM(BlueprintType)
enum class ELastHostType : uint8 {
    FriendsOnly,
    Public,
    Offline,
};

