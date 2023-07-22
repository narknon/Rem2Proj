#pragma once
#include "CoreMinimal.h"
#include "ConditionalAnimNotify.h"
#include "StateTransientAnimNotify.generated.h"

UCLASS(Abstract, Blueprintable, CollapseCategories)
class GUNFIRERUNTIME_API UStateTransientAnimNotify : public UConditionalAnimNotify {
    GENERATED_BODY()
public:
    UStateTransientAnimNotify();
};

