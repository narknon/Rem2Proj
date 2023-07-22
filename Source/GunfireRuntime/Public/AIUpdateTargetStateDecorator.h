#pragma once
#include "CoreMinimal.h"
#include "ActorStateDecorator.h"
#include "AIUpdateTargetStateDecorator.generated.h"

UCLASS(Blueprintable)
class GUNFIRERUNTIME_API UAIUpdateTargetStateDecorator : public UActorStateDecorator {
    GENERATED_BODY()
public:
    UAIUpdateTargetStateDecorator();
};

