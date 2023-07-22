#pragma once
#include "CoreMinimal.h"
#include "CompareOp.h"
#include "InheritableObject.h"
#include "Condition.generated.h"

UCLASS(Abstract, Blueprintable)
class GUNFIRERUNTIME_API UCondition : public UInheritableObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool InvertCondition;
    
    UCondition();
    UFUNCTION(BlueprintCallable)
    static bool CompareValue(float Value1, float Value2, CompareOp Compare);
    
};

