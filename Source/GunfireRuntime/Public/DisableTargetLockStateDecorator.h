#pragma once
#include "CoreMinimal.h"
#include "ActorStateDecorator.h"
#include "DisableTargetLockStateDecorator.generated.h"

UCLASS(Blueprintable)
class GUNFIRERUNTIME_API UDisableTargetLockStateDecorator : public UActorStateDecorator {
    GENERATED_BODY()
public:
    UDisableTargetLockStateDecorator();
};

