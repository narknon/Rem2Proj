#pragma once
#include "CoreMinimal.h"
#include "ELadderOccupancySearch.h"
#include "SharedLadderCondition.h"
#include "LadderOccupancyCondition.generated.h"

UCLASS(Blueprintable)
class GUNFIRERUNTIME_API ULadderOccupancyCondition : public USharedLadderCondition {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ELadderOccupancySearch Search;
    
    ULadderOccupancyCondition();
};

