#pragma once
#include "CoreMinimal.h"
#include "TacticalGraphPath.h"
#include "Templates/SubclassOf.h"
#include "TacticalGraphQuery.generated.h"

class UTacticalGraphQueryParams;

USTRUCT(BlueprintType)
struct FTacticalGraphQuery {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TSubclassOf<UTacticalGraphQueryParams> Params;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FTacticalGraphPath Result;
    
    REMNANT_API FTacticalGraphQuery();
};

