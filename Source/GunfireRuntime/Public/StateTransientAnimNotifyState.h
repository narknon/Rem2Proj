#pragma once
#include "CoreMinimal.h"
#include "ConditionalAnimNotifyState.h"
#include "StateTransientAnimNotifyState.generated.h"

UCLASS(Abstract, Blueprintable, CollapseCategories, EditInlineNew)
class GUNFIRERUNTIME_API UStateTransientAnimNotifyState : public UConditionalAnimNotifyState {
    GENERATED_BODY()
public:
    UStateTransientAnimNotifyState();
};

