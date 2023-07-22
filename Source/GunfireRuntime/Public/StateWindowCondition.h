#pragma once
#include "CoreMinimal.h"
#include "Condition.h"
#include "StateWindowCondition.generated.h"

UCLASS(Blueprintable)
class GUNFIRERUNTIME_API UStateWindowCondition : public UCondition {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName Window;
    
public:
    UStateWindowCondition();
};

