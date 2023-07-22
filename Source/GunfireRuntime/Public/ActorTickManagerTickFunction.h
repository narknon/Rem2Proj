#pragma once
#include "CoreMinimal.h"
#include "Engine/EngineBaseTypes.h"
#include "ActorTickManagerTickFunction.generated.h"

USTRUCT(BlueprintType)
struct FActorTickManagerTickFunction : public FTickFunction {
    GENERATED_BODY()
public:
    GUNFIRERUNTIME_API FActorTickManagerTickFunction();
};

template<>
struct TStructOpsTypeTraits<FActorTickManagerTickFunction> : public TStructOpsTypeTraitsBase2<FActorTickManagerTickFunction>
{
    enum
    {
        WithCopy = false
    };
};

