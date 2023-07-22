#pragma once
#include "CoreMinimal.h"
#include "ActorStateDecorator.h"
#include "DebugPrintStateDecorator.generated.h"

UCLASS(Blueprintable)
class GUNFIRERUNTIME_API UDebugPrintStateDecorator : public UActorStateDecorator {
    GENERATED_BODY()
public:
    UDebugPrintStateDecorator();
};

