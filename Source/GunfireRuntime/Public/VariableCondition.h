#pragma once
#include "CoreMinimal.h"
#include "VariableConditionBase.h"
#include "VariableCondition.generated.h"

UCLASS(Blueprintable)
class GUNFIRERUNTIME_API UVariableCondition : public UVariableConditionBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName VariableName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Value;
    
public:
    UVariableCondition();
};

