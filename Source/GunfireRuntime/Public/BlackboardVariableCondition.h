#pragma once
#include "CoreMinimal.h"
#include "BlackboardBoolValue.h"
#include "BlackboardClassValue.h"
#include "BlackboardNumValue.h"
#include "BlackboardObjectValue.h"
#include "BlackboardStringValue.h"
#include "VariableConditionBase.h"
#include "BlackboardVariableCondition.generated.h"

UCLASS(Blueprintable)
class GUNFIRERUNTIME_API UBlackboardVariableCondition : public UVariableConditionBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBlackboardNumValue NumericData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBlackboardBoolValue BooleanData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBlackboardStringValue TextData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBlackboardObjectValue ObjectData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBlackboardClassValue ClassData;
    
public:
    UBlackboardVariableCondition();
};

