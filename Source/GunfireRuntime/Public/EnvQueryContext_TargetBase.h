#pragma once
#include "CoreMinimal.h"
#include "EnvironmentQuery/EnvQueryContext.h"
#include "EnvQueryContext_TargetBase.generated.h"

UCLASS(Abstract, Blueprintable, EditInlineNew)
class GUNFIRERUNTIME_API UEnvQueryContext_TargetBase : public UEnvQueryContext {
    GENERATED_BODY()
public:
    UEnvQueryContext_TargetBase();
};

