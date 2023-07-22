#pragma once
#include "CoreMinimal.h"
#include "Condition.h"
#include "StateElapsedCondition.generated.h"

UCLASS(Blueprintable)
class GUNFIRERUNTIME_API UStateElapsedCondition : public UCondition {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ElapsedTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool Normalized;
    
public:
    UStateElapsedCondition();
};

