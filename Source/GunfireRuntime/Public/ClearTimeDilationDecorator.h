#pragma once
#include "CoreMinimal.h"
#include "ActorStateDecorator.h"
#include "ClearTimeDilationDecorator.generated.h"

UCLASS(Blueprintable)
class GUNFIRERUNTIME_API UClearTimeDilationDecorator : public UActorStateDecorator {
    GENERATED_BODY()
public:
    UClearTimeDilationDecorator();
};

