#pragma once
#include "CoreMinimal.h"
#include "ELadderPathSearch.h"
#include "ELadderPathToValidate.h"
#include "ENavAreaFlag.h"
#include "SharedLadderCondition.h"
#include "AILadderCondition.generated.h"

UCLASS(Blueprintable)
class GUNFIRERUNTIME_API UAILadderCondition : public USharedLadderCondition {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ENavAreaFlag AreaFlag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ELadderPathSearch PathSearch;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ELadderPathToValidate PathToValidate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool BestPath;
    
public:
    UAILadderCondition();
};

