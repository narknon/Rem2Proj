#pragma once
#include "CoreMinimal.h"
#include "Engine/EngineBaseTypes.h"
#include "InteractorManagerTickFunction.generated.h"

USTRUCT(BlueprintType)
struct FInteractorManagerTickFunction : public FTickFunction {
    GENERATED_BODY()
public:
    UIPF_API FInteractorManagerTickFunction();
};

template<>
struct TStructOpsTypeTraits<FInteractorManagerTickFunction> : public TStructOpsTypeTraitsBase2<FInteractorManagerTickFunction>
{
    enum
    {
        WithCopy = false
    };
};

