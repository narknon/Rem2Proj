#pragma once
#include "CoreMinimal.h"
#include "ActorStateDecorator.h"
#include "DisableInputDecorator.generated.h"

UCLASS(Blueprintable)
class GUNFIRERUNTIME_API UDisableInputDecorator : public UActorStateDecorator {
    GENERATED_BODY()
public:
    UDisableInputDecorator();
};

