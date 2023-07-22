#pragma once
#include "CoreMinimal.h"
#include "CompareOp.h"
#include "Condition.h"
#include "EMoveInputType.h"
#include "MoveInputCondition.generated.h"

UCLASS(Blueprintable)
class GUNFIRERUNTIME_API UMoveInputCondition : public UCondition {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    CompareOp Compare;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EMoveInputType Type;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Value;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool PersistValid;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool PersistNotValid;
    
public:
    UMoveInputCondition();
};

