#pragma once
#include "CoreMinimal.h"
#include "ConditionalAnimNotifyState.h"
#include "AnimNotifyState_ResetLookPoses.generated.h"

UCLASS(Blueprintable, CollapseCategories, EditInlineNew)
class GUNFIRERUNTIME_API UAnimNotifyState_ResetLookPoses : public UConditionalAnimNotifyState {
    GENERATED_BODY()
public:
    UAnimNotifyState_ResetLookPoses();
};

