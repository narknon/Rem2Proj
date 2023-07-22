#pragma once
#include "CoreMinimal.h"
#include "Condition.h"
#include "Conditions.h"
#include "GroupCondition.generated.h"

UCLASS(Blueprintable)
class GUNFIRERUNTIME_API UGroupCondition : public UCondition {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FConditions Conditions;
    
    UGroupCondition();
};

