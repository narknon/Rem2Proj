#pragma once
#include "CoreMinimal.h"
#include "Condition.h"
#include "ChanceCondition.generated.h"

UCLASS(Blueprintable)
class GUNFIRERUNTIME_API UChanceCondition : public UCondition {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Chance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ChanceIncreaseOnFail;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool StoreConditionState;
    
public:
    UChanceCondition();
};

