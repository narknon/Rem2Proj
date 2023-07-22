#pragma once
#include "CoreMinimal.h"
#include "NavigationSystem.h"
#include "NavigationSystemGunfire.generated.h"

UCLASS(Blueprintable, NonTransient)
class GUNFIRERUNTIME_API UNavigationSystemGunfire : public UNavigationSystemV1 {
    GENERATED_BODY()
public:
    UNavigationSystemGunfire();
};

