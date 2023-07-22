#pragma once
#include "CoreMinimal.h"
#include "Condition.h"
#include "ELadderEntryType.h"
#include "Templates/SubclassOf.h"
#include "LadderEnterCondition.generated.h"

class ULadderParams;

UCLASS(Blueprintable)
class GUNFIRERUNTIME_API ULadderEnterCondition : public UCondition {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<ULadderParams> LadderParams;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool LadderMustBeEmpty;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ELadderEntryType EntryType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bValidateEntryArc;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float EntryArc;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 AdditionalOccupancyRungs;
    
    ULadderEnterCondition();
};

