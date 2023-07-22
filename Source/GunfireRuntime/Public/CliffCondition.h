#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "TraversalCondition.h"
#include "CliffCondition.generated.h"

class UCliffConditionParams;

UCLASS(Blueprintable)
class GUNFIRERUNTIME_API UCliffCondition : public UTraversalCondition {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, NoClear, meta=(AllowPrivateAccess=true))
    TSubclassOf<UCliffConditionParams> Params;
    
    UCliffCondition();
};

