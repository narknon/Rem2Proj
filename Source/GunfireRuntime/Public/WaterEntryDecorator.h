#pragma once
#include "CoreMinimal.h"
#include "ActorStateDecorator.h"
#include "WaterEntryDecorator.generated.h"

UCLASS(Blueprintable)
class GUNFIRERUNTIME_API UWaterEntryDecorator : public UActorStateDecorator {
    GENERATED_BODY()
public:
    UWaterEntryDecorator();
};

