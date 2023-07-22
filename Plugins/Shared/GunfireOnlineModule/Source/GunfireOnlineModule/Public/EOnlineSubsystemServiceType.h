#pragma once
#include "CoreMinimal.h"
#include "EOnlineSubsystemServiceType.generated.h"

UENUM(BlueprintType)
enum class EOnlineSubsystemServiceType : uint8 {
    DefaultPlatformService,
    NativePlatformService,
};

