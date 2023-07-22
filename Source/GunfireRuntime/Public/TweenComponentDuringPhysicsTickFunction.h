#pragma once
#include "CoreMinimal.h"
#include "Engine/EngineBaseTypes.h"
#include "TweenComponentDuringPhysicsTickFunction.generated.h"

USTRUCT(BlueprintType)
struct FTweenComponentDuringPhysicsTickFunction : public FTickFunction {
    GENERATED_BODY()
public:
    GUNFIRERUNTIME_API FTweenComponentDuringPhysicsTickFunction();
};

template<>
struct TStructOpsTypeTraits<FTweenComponentDuringPhysicsTickFunction> : public TStructOpsTypeTraitsBase2<FTweenComponentDuringPhysicsTickFunction>
{
    enum
    {
        WithCopy = false
    };
};

