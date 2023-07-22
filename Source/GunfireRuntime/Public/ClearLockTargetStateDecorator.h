#pragma once
#include "CoreMinimal.h"
#include "ActorStateDecorator.h"
#include "ClearLockTargetStateDecorator.generated.h"

UCLASS(Blueprintable)
class GUNFIRERUNTIME_API UClearLockTargetStateDecorator : public UActorStateDecorator {
    GENERATED_BODY()
public:
    UClearLockTargetStateDecorator();
};

