#pragma once
#include "CoreMinimal.h"
#include "Condition.h"
#include "EAwarenessState.h"
#include "Templates/SubclassOf.h"
#include "AITargetCondition.generated.h"

class UAITargetSelector;

UCLASS(Blueprintable)
class GUNFIRERUNTIME_API UAITargetCondition : public UCondition {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UAITargetSelector> TargetSelector;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EAwarenessState AwarenessState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName PathTarget;
    
public:
    UAITargetCondition();
};

