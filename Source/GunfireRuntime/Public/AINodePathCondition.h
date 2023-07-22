#pragma once
#include "CoreMinimal.h"
#include "Condition.h"
#include "ENodePathStatus.h"
#include "AINodePathCondition.generated.h"

UCLASS(Blueprintable)
class GUNFIRERUNTIME_API UAINodePathCondition : public UCondition {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ENodePathStatus Status;
    
public:
    UAINodePathCondition();
};

