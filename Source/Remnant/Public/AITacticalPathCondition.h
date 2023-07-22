#pragma once
#include "CoreMinimal.h"
#include "Condition.h"
#include "Templates/SubclassOf.h"
#include "AITacticalPathCondition.generated.h"

class UTacticalGraphQueryParams;

UCLASS(Blueprintable)
class REMNANT_API UAITacticalPathCondition : public UCondition {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UTacticalGraphQueryParams> Params;
    
    UAITacticalPathCondition();
};

