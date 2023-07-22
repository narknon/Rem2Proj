#pragma once
#include "CoreMinimal.h"
#include "Condition.h"
#include "PlayersNearbyCondition.generated.h"

UCLASS(Blueprintable)
class REMNANT_API UPlayersNearbyCondition : public UCondition {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Range;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool TestLOS;
    
public:
    UPlayersNearbyCondition();
};

