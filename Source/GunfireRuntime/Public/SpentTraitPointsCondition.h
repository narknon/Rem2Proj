#pragma once
#include "CoreMinimal.h"
#include "Condition.h"
#include "SpentTraitPointsCondition.generated.h"

UCLASS(Blueprintable)
class GUNFIRERUNTIME_API USpentTraitPointsCondition : public UCondition {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 RequiredTraitPointsSpent;
    
    USpentTraitPointsCondition();
};

