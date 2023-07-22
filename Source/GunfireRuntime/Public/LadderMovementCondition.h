#pragma once
#include "CoreMinimal.h"
#include "Condition.h"
#include "ELadderClimbDirection.h"
#include "LadderMovementCondition.generated.h"

UCLASS(Blueprintable)
class GUNFIRERUNTIME_API ULadderMovementCondition : public UCondition {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ELadderClimbDirection Direction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 AdditionalRungs;
    
    ULadderMovementCondition();
};

