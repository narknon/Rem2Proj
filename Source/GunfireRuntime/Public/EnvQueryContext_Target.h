#pragma once
#include "CoreMinimal.h"
#include "EnvQueryContext_TargetBase.h"
#include "EnvQueryContext_Target.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class GUNFIRERUNTIME_API UEnvQueryContext_Target : public UEnvQueryContext_TargetBase {
    GENERATED_BODY()
public:
    UEnvQueryContext_Target();
};

