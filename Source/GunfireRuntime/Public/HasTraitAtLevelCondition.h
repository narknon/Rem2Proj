#pragma once
#include "CoreMinimal.h"
#include "Condition.h"
#include "HasTraitAtLevelCondition.generated.h"

class UTrait;

UCLASS(Blueprintable)
class GUNFIRERUNTIME_API UHasTraitAtLevelCondition : public UCondition {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<UTrait> RequiredTrait;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 RequiredTraitLevel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool FilterOnlyArchetypes;
    
    UHasTraitAtLevelCondition();
};

