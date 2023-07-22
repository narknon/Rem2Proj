#pragma once
#include "CoreMinimal.h"
#include "Condition.h"
#include "EInteractiveResult.h"
#include "InteractiveResult.generated.h"

UCLASS(Blueprintable)
class GUNFIRERUNTIME_API UInteractiveResult : public UCondition {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EInteractiveResult Result;
    
public:
    UInteractiveResult();
};

