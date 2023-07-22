#pragma once
#include "CoreMinimal.h"
#include "CompareOp.h"
#include "Condition.h"
#include "DifficultyCondition.generated.h"

UCLASS(Blueprintable)
class GUNFIRERUNTIME_API UDifficultyCondition : public UCondition {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    CompareOp Compare;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Difficulty;
    
public:
    UDifficultyCondition();
};

