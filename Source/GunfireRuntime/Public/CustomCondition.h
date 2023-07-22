#pragma once
#include "CoreMinimal.h"
#include "Condition.h"
#include "CustomCondition.generated.h"

UCLASS(Blueprintable)
class GUNFIRERUNTIME_API UCustomCondition : public UCondition {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName FunctionName;
    
public:
    UCustomCondition();
};

