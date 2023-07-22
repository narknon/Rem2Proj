#pragma once
#include "CoreMinimal.h"
#include "StateTransientAnimNotify.h"
#include "TargetConvergeSettings.h"
#include "AnimNotify_TargetConverge.generated.h"

UCLASS(Blueprintable, CollapseCategories)
class GUNFIRERUNTIME_API UAnimNotify_TargetConverge : public UStateTransientAnimNotify {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTargetConvergeSettings Settings;
    
    UAnimNotify_TargetConverge();
};

