#pragma once
#include "CoreMinimal.h"
#include "ActorStateDecorator.h"
#include "CrouchStateDecorator.generated.h"

UCLASS(Blueprintable)
class GUNFIRERUNTIME_API UCrouchStateDecorator : public UActorStateDecorator {
    GENERATED_BODY()
public:
    UCrouchStateDecorator();
};

