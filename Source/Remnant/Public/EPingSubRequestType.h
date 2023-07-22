#pragma once
#include "CoreMinimal.h"
#include "EPingSubRequestType.generated.h"

UENUM(BlueprintType)
enum class EPingSubRequestType : uint8 {
    PrimaryAmmo,
    SecondaryAmmo,
    Assistance,
    WorldStone,
    ThisWay,
    LetsGo,
};

