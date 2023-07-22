#pragma once
#include "CoreMinimal.h"
#include "EnvQueryContext_TargetBase.h"
#include "EnvQueryContext_TargetLastKnownPosition.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class GUNFIRERUNTIME_API UEnvQueryContext_TargetLastKnownPosition : public UEnvQueryContext_TargetBase {
    GENERATED_BODY()
public:
    UEnvQueryContext_TargetLastKnownPosition();
};

